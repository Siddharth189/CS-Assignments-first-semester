///6. Write a program in C to count the occurrences of odd numbers in an array.
#include<stdio.h>
#include<stdlib.h>

int countOdd(int *b,int size)
{
    int Codd=0;
    char *c = (char *) calloc( size, (sizeof(char)));

    for(int i=0; i<size; i++)
    {
        if(c[i]==0)
        {
            if(b[i]%2==1)
            {
                Codd++;
                c[i]=1;
            }
        }
    }

free(c);

return Codd;
}

int main()
{
    int a[5],s;
    printf("enter the element of array ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    int odd = countOdd(a,5);

    printf("\n\nNumber of odd in the array = %d", odd);

    return 0;
}

