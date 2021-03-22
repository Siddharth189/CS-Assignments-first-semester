/**Do not use goto. However, if you choose to use goto, this program 3 shows a possibly good example of using goto for exception handling. */
#include <stdio.h>

#define BUFFER_SIZE 4096


int main(int argc, char *argv[])
{
    if (argc != 3)
        goto ImproperArgumentsException;
    char *source = argv[1], *target = argv[2];
    FILE *reader = fopen(source, "rb");
    if (!reader)
        goto FileReadException;
    FILE *writer = fopen(target, "wb");
    if (!writer)
        goto FileWriteException;
    char c[BUFFER_SIZE];
    while (fread(&c, sizeof (char), 1, reader))
        fwrite(&c, sizeof (char), 1, writer);
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
