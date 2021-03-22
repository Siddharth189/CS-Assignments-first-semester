///6. Write a program in C to reverse a string. The string is user input.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int string_is_reverse(char *sent1)
{
    int i, j;
    char t;

    for(i = 0; sent1[i]; i++)
    {
    }
    i = i-1;
    for(j=0 ; j < i; i--, j++)
    {
        t = sent1[i];
        sent1[i] = sent1[j];
        sent1[j] = t;
    }

    printf("%s", sent1);

    return 0;
}


int main()
{
    int length;
    printf("Enter the length of the string: ");
    scanf("%d", &length);

    char *str2 = (char *) malloc(length*sizeof(char));
    //char str1[] = "12345";
    //int length = strlen(str1);

    printf("\nEnter %d string: ", (length));
    scanf("%s", str2);

    printf("%s", str2);

    printf("\n");
    printf("Reversed string is: ");
    string_is_reverse(str2);
    printf("\n");

    free(str2);
    return 0;
}
