#include<stdio.h>

int main()
{
    int n=10;

    for(int i=1;i<=n;i++)
    {
        if((n%i!=0)&&(i!=1))
        {
            printf("%d",i);
        }
    }




    return 0;
}
///16. Write a program in C to print the prime numbers that are less than a given value n.
