///1. Write a function in C to find if a given integer x appears more than n/2 times in an array of n integers.
#include<stdio.h>

#define size 8



int check(int *a, int n)
{
    int  count;
    ///printf("\n%f ", count);
    printf("\n");
    printf("\nThe given number appears more than %d times: ", size/2);
    for(int i=0; i<n; i++)
    {
        count = 1;
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count > 4)
            {
                printf("%d\n", a[i]);
                break;
            }
        }

    }

 printf("\n");
    return 0;
}


int main()
{
    int arr[size];

    printf("Enter %d elements of the array ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    check(arr, size);


    return 0;
}
