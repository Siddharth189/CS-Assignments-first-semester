///1. Write a program in C to print the address of each character in a given string. The string is user input.
#include<stdio.h>
#include<string.h>


int main()
{
    char str1[10];
    printf("Enter the string: ");
    scanf("%s", str1);

    printf("Here are the address of each element in the character type array: \n");

    for(int i=0; str1[i]; i++)
        printf("add of str[%d], %c is %d\n", i, str1[i], &str1[i]);

return 0;
}
