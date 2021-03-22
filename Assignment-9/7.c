///7. Write a function in C to implement binary search on a sorted array.
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

int checkp(int *arrsort, int left, int right, int x)
{
    int mid = left + right / 2;

    if(left <= right)
    {
        if(arrsort[mid] == x)
        {
            return mid;
        }
        else if(arrsort[mid] < x)
        {
            return checkp(arrsort, mid + 1, right, x);
        }
        else if(arrsort[mid] > x)
        {
            return checkp(arrsort, left, mid-1, x);
        }
    }

    else
    {
        return -1;
    }

    printf("\n");


}

int main()
{
    int arr[] = {8,2,3,7,5,9,6,1,4};
    int x;
    int lengthArray = sizeof(arr) / sizeof arr[0];


    int *arrsort = sortedArray(arr, lengthArray);
    for(int i=0; i<lengthArray; i++)
    {
        printf("%d",arrsort[i]);
    }

    int left = arrsort[0], right = arrsort[lengthArray - 1];

    printf("\nEnter the number you want to search: ");
    scanf("%d",&x);

    int result = checkp(arrsort, left, right, x);

    if(result == -1)
    {
        printf("%d is not present", x);
    }
    else{
        printf("%d is present", x);
    }



    return 0;
}
