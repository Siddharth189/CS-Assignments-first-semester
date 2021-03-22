///21. Write a program in C to find xn for a given positive real value x and a positive integer n.
#include<stdio.h>

int main()
{
    int n=2;
    int x=3;
    int val=1;

    for(int i=1;i<=n;i++)
    {
        val *=x;
    }

    printf("%d",val);


    return 0;
}

