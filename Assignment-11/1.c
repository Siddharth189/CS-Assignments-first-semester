///1. Write a macro to test whether a character is a small case letter or not.
#include <stdio.h>

#define UPPERCASE(x) (x >= 'A' && x <= 'Z')
#define LOWERCASE(x) (x >= 'a' && x <= 'z')

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("\n%c\n", ch);

    if (UPPERCASE(ch))
        printf("%c is uppercase\n", ch);
    else if (LOWERCASE(ch))
        printf("%c is lowercase\n", ch);
    else
        printf("Entered character is not alphabet");

    return 0;
}
