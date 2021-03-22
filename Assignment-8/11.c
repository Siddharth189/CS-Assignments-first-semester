///11. Write a function in C to delete an element at the desired position from an array.
#include<stdio.h>
#include<stdlib.h>

int * remov(int *b, int size)
{
    int index=0;
    printf("\nEnter the index(0-%d) which u want to remove: ", size-1);
    scanf("%d", &index);

    int *temp = (int *) calloc(size-1, sizeof(int));

    for(int i=0;i<size;i++)
    {
        if(index>i)
        {
            temp[i]=b[i];
        }
       else if(index<=i)
        {
            temp[i]=b[i+1];
        }
    }


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
    int *re = remov(a, s);

    printf("\nTemp array contains the elements: ");

      for(int i=0; i<s-1; i++)
    {
        printf("%d ",re[i]);
    }

        printf("\n\n");



    return 0;
}

