#include<stdio.h>

int main()
{
    //7. Write a program in C to check whether a character is an alphabet in English or not.

    char ch='7';

    if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    {
        printf("This is alphabet");
    }
    else{
        printf("This is not an alphabet");
    }


    return 0;
}
