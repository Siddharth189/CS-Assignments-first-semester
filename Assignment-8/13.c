///13. Write a function in C to add a new value in a sorted array. After the operation, the modified array needs to be sorted.
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
               /// p[i]=b[i];
            }
            else
            {
                swap(&b[i], &b[j]);
            }
        }
    }

    printf("\nFinal sorted array with a new number the elements: ");

    for(int i=0; i<size; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n\n");


    return 0;
}

int addedarray(int *b, int size)
{
    int num = 0, index = 0;
    printf("\nEnter the number and index(0-%d) at which u want to add ", size-1);
    scanf("%d %d", &num, &index);

    int *p = (int *) calloc(size+1, sizeof(int));

    for(int i=0; i<size; i++)
    {
        if(index>i)
        {
            p[i] = b[i];
        }
        if(index<=i)
        {
            p[i+1] = b[i];
        }
    }

    p[index] = num;

    printf("\nArray without sorting: ");
     for(int i=0; i<size+1; i++)
    {
        printf("%d ",p[i]);
    }
    shortedarray(p, size+1);



    return 0;
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
    ///int *result = shortedarray(a, s);


    addedarray(a, s);



return 0;
}


