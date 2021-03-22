///4. Write a function in C to copy the elements of one array into another array.
#include<stdio.h>


int main()
{
    int a[3], b[3];

    printf("Now fill the array ");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("printing array a ");
    for(int i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }

    for(int i=0;i<3;i++)
    {
       b[i] = a[i];
    }
    printf("\nprinting array b ");
    for(int i=0;i<3;i++)
    {
        printf("%d ",b[i]);
    }



    return 0;
}

