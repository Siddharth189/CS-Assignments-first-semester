///3. Write a program in C to convert all lowercase characters to uppercase in a string. The string is user input.
#include<stdio.h>


int main()
{
    char str1[6] = "HeLlo";
    printf("Earlier the string was: ");
    for(int i=0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n\n");
    for(int i=0; str1[i]; i++)
    {
        if(str1[i] >= 65 && str1[i] <= 90);
        if(str1[i] >= 97 && str1[i] <= 122)
        {
            printf("before making in upper case: %c", str1[i]);
            str1[i] = str1[i] - 32;
            printf(" after making in upper case: %c\n", str1[i]);
        }

    }

    printf("\nFinally the string is: ");
    for(int i=0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");


return 0;
}
