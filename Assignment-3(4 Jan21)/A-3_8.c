#include<stdio.h>

int main()
{
    char ch='K';

    if((ch>='a')&&(ch<='z'))
    {
        printf("lower case");
    }
    else if((ch>='A')
        &&(ch<='Z'))
    {
        printf("upper case");

    }
    else
    {
        printf("not an alphabet");
    }

    return 0;
}
