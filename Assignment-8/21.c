///21. Write a program in C to find a pair of elements in an array of int,such that,the sum of these
///elements is equal to a given number.
#include<stdio.h>
#include<stdlib.h>

#define size 4


int create1DArray(int n, int *sum)
{
    int arr[size];
    printf("Enter %d elements of the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the sum: ");
    scanf("%d",sum);

    ///LOGIC FOR THE SUM
    printf("\n");

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] + arr[j] == *sum)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], *sum);
            }
        }
    }

return 0;
}

int main()
{
    int sum = 8;

    int a = create1DArray(size, &sum);


return 0;
}
