///5. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
#include<stdlib.h>

int duplicate(int *b,int size)
{
    int dupli=0;
    char *c = (char *) calloc( size, (sizeof(char)));

    for(int i=0; i<size; i++)
    {
        if(c[i]==0)
        {
            for(int j=i+1; j<size; j++)
            {
                if(b[i]==b[j])
                {
                    dupli++;
                    c[j]=1;
                }
            }
        }
    }

    free(c);

    return dupli;
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
    int dp = duplicate(a,5);

    printf("\n\nNumber of duplicate in the array = %d", dp);

    return 0;
}

