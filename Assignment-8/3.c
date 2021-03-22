///3. Write a program in C to find the minimum element in an array.
#include<stdio.h>


int min(int b[5],int *m )
{
    *m= b[0];
    for(int i=1; i<5; i++)
    {
        *m = *m < b[i] ? *m : b[i];
    }
 return *m;
}

int main()

{
    int a[5],m;
    printf("enter the element of array: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    int p = min(a,&m);
    printf("\nmin element in the array = %d ",p);


    return 0;
}

