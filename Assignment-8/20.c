///20. Write a function in C to check whether a given matrix is an identity matrix.
#include<stdio.h>
#include<stdlib.h>

#define row 3
#define col 3


int create2DArray(int m, int n)
{
    int a[row][col] ;
    printf("Enter the elements of first matrix: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int g[col][row];
    int h[row][col];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            h[i][j] = (a[i][j]);
        }
    }


    printf("\nChecking the matrix: \n");
     for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int flag = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                {
                    flag += 1;
                }
            }
            if(i!=j)
            {
                if(a[i][j]==0)
                {
                    flag += 1;
                }
            }
        }
    }

    if(flag == row + 2*col)
    {
        printf("\nIdentity Matrix \n");
    }
    else
    {
        printf("\nNot A Identity Matrix \n");

    }


return 0;
}


int main()
{
    if(row!=col)
    {
        printf("Invalid situation\n");
    }
    else
    {
        int a = create2DArray(row, col);
    }


    return 0;
}




