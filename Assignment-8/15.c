///15. Write a function in C for the addition of two matrices of the same size.
#include<stdio.h>
#include<stdlib.h>

int create2DArray(int m, int n)
{
    int a[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    printf("Enter the elements of first matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    printf("\nEnter the elements of first matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    int g[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    printf("\nAdding first + second matrix: \n");

    ///add2D(a, b, m, n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            g[i][j] = (b[i][j] + a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }

return 0;
}


int main()
{
    int num1=3, num2=3;
    int a = create2DArray(num1, num2);



return 0;
}
