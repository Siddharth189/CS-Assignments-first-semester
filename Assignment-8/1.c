///1. Write a program in C to read n int values in an array and display it in reverse order.
#include<stdio.h>


int main()
{
    int a[4];

    printf("Now fill the array ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nReverse of the array ");
    for(int i=4-1;i>=0;i--)
    {
        printf("%d ", a[i]);
    }



    return 0;
}

