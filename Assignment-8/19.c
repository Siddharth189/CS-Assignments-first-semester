///19. Write a program in C to find the sum of rows and columns of a matrix.
#include<stdio.h>
#include<stdlib.h>

#define row 2
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


    printf("\nSum of rows and column: \n");
    for(int i=0; i<m; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            sum += a[i][j];
        }
        printf("Sum of elements in row %d is %d\n", i+1, sum);
    }
    printf("\n\n");
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<m; j++)
        {
            sum += a[j][i];
        }
        printf("Sum of elements in column %d is %d\n", i+1, sum);
    }



    return 0;
}


int main()
{

    int a = create2DArray(row, col);



    return 0;
}




