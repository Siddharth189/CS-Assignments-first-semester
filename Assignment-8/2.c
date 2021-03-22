///2. Write a function in C to find the sum of all elements of the array.
#include<stdio.h>


int main()
{
    int a[4];
    int sum=0;

    printf("Now fill the array ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=4-1;i>=0;i--)
    {
        sum += a[i];
    }


    printf("The sum of array elts is %d ",sum);

    return 0;
}
