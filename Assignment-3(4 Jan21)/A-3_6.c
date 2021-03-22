#include<stdio.h>

int main()
{

    //6. Write a program in C to find the maximum of two numbers. Do not use the ?: operator

    int a=2, b=60, max;

    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }

    printf("%d",max);

    return 0;
}
