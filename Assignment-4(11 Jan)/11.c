///11. Write a program in C to print all even numbers between 1-n,where n is a positive integer.
#include<stdio.h>

int main()
{
    int n=38;

    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("\n%d is",i);
            printf(":Even");
        }
        else
        {
            printf("\n%d is",i);
            printf(":Odd");
        }
    }



    return 0;
}
