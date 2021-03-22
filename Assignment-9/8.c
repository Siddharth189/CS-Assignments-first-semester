///8. Write a function in C to implement selection sort.
#include<stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int *sortedArray(int *A, int length)
{
    int min_index = 0;

    for(int i = 0; i < length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(A[i]>A[j])
            {
                swap(&A[i], &A[j]);
            }
        }
    }

    return A;
}
int main()
{
    int arr[5];
    int n = 5;
    printf("Enter %d elements of the array: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *result = sortedArray(arr, n);

    printf("\n");
    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);


return 0;
}
