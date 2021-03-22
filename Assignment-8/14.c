///14. Write a function in C to find the second largest element in an array.
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
    int *p = (int *)malloc(size * sizeof(int));
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(b[i]<b[j])
            {
                ///p[i]=b[i];
            }
            else
            {
                swap(&b[i], &b[j]);
            }
        }
    }

    printf("\n\n");

    for(int i=0; i<size; i++)
    {
        printf("%d ",b[i]);
    }



return b;
}
int main()
{
    int a[5],s=5;
    printf("Enter the %d element of array: ", s);
    for(int i=0; i<s; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<s; i++)
    {
        printf("%d ",a[i]);
    }
    int *re = shortedarray(a, s);

    printf("\n\nSecond largest number in the array is: %d", re[s-2]);


return 0;
}
