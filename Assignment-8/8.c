///8. Write a function in C to merge two arrays of the same size sorted in descending order. #include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int * shortedarray(int *b, int size)
{
    ///int *p = (int *)malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(b[i]<b[j])
            {
               swap(&b[i], &b[j]);
            }
            else
            {
                ///swap(&b[i], &b[j]);
            }
        }
    }
    printf("\nFinal sorted array with merging two array: ");

    for(int i=0; i<size; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n\n");


    return 0;
}


int mergesorted(int *pa, int *pb, int n)
{
    int *p = (int *) calloc(n*2, sizeof(int));

    for(int i=0; i<n*2; i++)
    {
        if(n<i)
        {
            p[i] = pa[i];
        }
        if(n>=i)
        {
            p[i] = pb[i];
        }
    }

    int *result = shortedarray(p, n*2);

   /** for(int i=0; i<n*2; i++)
    {
        printf("%d", result[i]);
    }*/


}



int main()
{
    int a[5];
    int b[5], n=5;

    printf("Enter the elements of first array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the elements of second array: ");
    for(int j=0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }

    mergesorted(a, b, n);




    return 0;
}


