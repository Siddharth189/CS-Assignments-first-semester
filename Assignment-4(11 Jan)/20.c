///20. Write a program in C to print the Fibonacci series up to the first n terms.
#include<stdio.h>

int main()
{
    int n=10;
    int u=0,v=1;

    for(int i=1;i<=n;i++)
    {
        printf("fibo(%d) = %d\n", i, v);
        int next = u+v;
        u=v;
        v=next;

    }




    return 0;
}

