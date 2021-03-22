///23. Write a program in C to find all sub arrays with a given sum from a given array..
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

    int j = 0;
    for(int i = 0; i < size; i++)
    {
        int s = 0;
        int *p =(int *) calloc(n, sizeof(int));
        for(j = i + 1; j < size; j++)
        {
            s += arr[j];
            p[j] = arr[j];
            p[i] = arr[i];
            /*if(arr[i] + arr[j] == *sum)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], *sum);
            }*/
        }
        if(arr[i] + s == sum)
        {
            for(int k = 0; k < n; k++)
            {
                printf("%d ", p[k]);

            }
        }
        free(p);
    }

return 0;
}

int main()
{
    int sum = 8;

    int a = create1DArray(size, &sum);


return 0;
}
