///4. Write a function in C to move all zeros to the end of a given array.
#include<stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

int movezero(int m)
{
    int p[5];
    int count=0;

    printf("Enter %d elements of bigger array: ", m);

    for(int i=0; i<m; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("\n");

    for(int i=0; i<m; i++)
    {
        printf("%d", p[i]);
    }

    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            if(p[i] < p[j])
            {
                swap(&p[i], &p[j]);
            }
        }
    }
    printf("\n\nFinal array is: ", m);

    for(int i=0; i<m; i++)
    {
        printf("%d", p[i]);
    }
    printf("\n");



    return 0;
}


int main()
{
    int m = 5;

    movezero(m);


    return 0;
}
