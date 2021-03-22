#include<stdio.h>

int main()
{
    //9. Write a program in C to check whether a character is a vowel or consonant.

    char ch='c';

    if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    {
        if(((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
            ||((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')))
        {
            printf("this is vowel");
        }
        else if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
        {
            printf("it is consonant");
        }
    }
    return 0;
}
