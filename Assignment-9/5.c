///5. Write a function in C to generate a random permutation of array elements.
#include<stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int *randomPerm(int *A, int length)
{
    int min_index = 0;
    int count=0;

    for(int i=0; i<length; i++)
    {
        if(A[i]>A[i+1])
        {
            count = 1;
            swap(&A[i], &A[i+1]);
        }
    }
    if(count==0)  return A;

    return bubblesort(A, length);
}
int main()
{
    int arr[5];
    int n = 5;
    printf("Enter %d elements of the array: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *result = randomPerm(arr, n);

    printf("\n");
    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);


    return 0;
}
