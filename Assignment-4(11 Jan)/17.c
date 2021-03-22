#include<stdio.h>

int main()
{
    int n=6;
    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }

     printf("factorial of %d is: %d",n,fact);


    return 0;
}

///17. Write a program in C to find the factorial of a number.
