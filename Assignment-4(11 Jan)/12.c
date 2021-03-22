///12. Write a program in C to print the multiplication table of any number.
#include<stdio.h>


int main()
{
    int n=6;

    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }



    return 0;
}
