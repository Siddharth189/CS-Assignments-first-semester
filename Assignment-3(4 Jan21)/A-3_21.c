#include<stdio.h>

int main()
{
    char ch='c';

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))//i. A small letter and a vowel.
    {
        if((ch>='a')&&(ch<='z'))
        {
            printf("small letter and a vowel.");

        }
    }
    else if(((ch>='A')&&(ch<='Z'))^((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')))
    {
        printf("A capital letter and a consonant.");
    }
    else if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    {
        printf("A character in English but does not fall in the last two categories.");
    }
    else
    {
        printf("Not a character in English (maybe a special character, e.g., $).");
    }

    return 0;
}
