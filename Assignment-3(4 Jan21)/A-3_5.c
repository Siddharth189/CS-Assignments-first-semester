#include<stdio.h>

int main()
{
    //5. Write a program in C to check whether a number is negative, positive, or zero

    int n=-5;

    if(n==0)
    {
        printf("zero");
    }
    else if(n>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    return 0;
}
