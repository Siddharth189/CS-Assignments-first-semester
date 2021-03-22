/**
Do not use goto. However, if you choose to use goto, this program
shows a possibly good example of using goto for exception handling.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
        goto ImproperArgumentsException;

    char *source = argv[1], *target = argv[2];

    FILE *reader = fopen(source, "r");
    if (!reader)
        goto FileReadException;

    FILE *writer = fopen(target, "w");
    if (!writer)
        goto FileWriteException;

    for (char c = 0; (c = fgetc(reader)) != EOF; fputc(c, writer))
        ;

    fclose(reader);
    fflush(writer);
    fclose(writer);

    fprintf(stdout, "%s is successfully copied to %s.\n", source, target);

    return 0;

ImproperArgumentsException:
    fprintf(stdout, "Usage: <executable> <source_file> <target_file>\n");
    return -1;

FileReadException:
    fprintf(stderr, "Exception in reading file: %s\n", source);
    fprintf(stderr, "The program will now terminate.\n");
    return -1;

FileWriteException:
    fclose(reader);
    fprintf(stderr, "Exception in writing file: %s\n", target);
    fprintf(stderr, "The program will now terminate.\n");
    return -1;

}

