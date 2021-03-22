#include<stdio.h>

int main()
{
    //10. Write a program in C to check whether a character is an alphabet in English,a digit, or something else.


    int i='9';


    if(((i>='a')&&(i<='z'))||((i>='A')&&(i<='Z')))
    {
        printf("character is an alphabet in English");
    }
    else if(i>='0'&&i<='9')
    {
        printf("a digit");
    }
    else
    {
        printf("something else");
    }
    return 0;
}
