///10. Write a program in C to dynamically allocate and deallocate memory for a lower triangular matrix.
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int size = 3;
    printf("Enter the size of matrix: ");
    scanf("%d", &size);
    int **p = (int **) calloc(size, sizeof(int *));

    for(int i=0;i<size;i++)
    {
        p[i] = (int *) calloc(size, sizeof(int));
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i>j)
            {
                p[i][j] = 0;
            }else
            {
                p[i][j] = 1;
            }

        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d", p[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<size;i++)
    {
        free(p[i]);
    }

    free(p);

return 0;
}
