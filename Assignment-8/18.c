///18. Write a function in C to find the transpose of a given matrix.
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
            printf("%d",a[i][j]);
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


    printf("\nTransposed matrix: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            /*if(i<j)
            {
                g[i][j] = a[j][i];
            }*/
            if(i==j)
            {
                g[j][i] = a[j][i];
            }
            else
            {
                g[j][i] = a[i][j];
            }
        }
    }


    ///add2D(a, b, m, n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }

    return 0;
}


int main()
{

    int a = create2DArray(row, col);



    return 0;
}




