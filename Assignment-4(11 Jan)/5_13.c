#include<stdio.h>

int main()
{
    int i,j,l,n=4,m=8;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*i-1; j++)
        {
            printf("%d ",j); //print upper half
        }
        printf("\n");
    }

    for(i=5; i<=7; i++)
    {
        for(l=1; l<=2*(m-i)-1; l++)
        {
            printf("%d ",l); //print lower half
        }
        printf("\n");
    }
    return 0;
}
/*
xiii.
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5
1 2 3
1
*/

