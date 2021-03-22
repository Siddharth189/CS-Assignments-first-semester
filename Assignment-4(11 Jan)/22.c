///22. Write a program in C to check whether a number is Perfect number or not.
#include<stdio.h>

int main()
{
    int n=6;
    int sum=0;


    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
             sum += i;
        }
    }
    if(sum==n)
    {
        printf("PerfectNumber");
    }
    else
    {
        printf("NotPerfectNumber");
    }



    return 0;
}

///Perfect number, a positive integer that is equal to the sum of its proper divisors.
///The smallest perfect number is 6, which is the sum of 1, 2, and 3.
