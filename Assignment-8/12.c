///12. Write a function in C to add an element at the desired position of an array.
#include<stdio.h>
#include<stdlib.h>

int * add(int *b, int size)
{
    int index=0, extra=0;
    printf("\nEnter the index(0-%d) at which u want to add the element: ", size-1);
    scanf("%d", &index);
    printf("\nEnter the number which u want to add: ");
    scanf("%d", &extra);

    int *temp = (int *) calloc(size+1, sizeof(int));

    for(int i=0;i<size;i++)
    {
        if(index>i)
        {
            temp[i]=b[i];
        }

        else if(index<=i)
        {
            temp[i+1]=b[i];
        }
    }

    temp[index]=extra;


return temp;
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
    int *result = add(a, s);

    printf("\nTemp array contains the elements: ");

      for(int i=0; i<s+1; i++)
    {
        printf("%d ",result[i]);
    }

        printf("\n\n");



    return 0;
}

