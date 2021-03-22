
#include<stdio.h>

int main()
{
    int i,j,l,n=7,m=4,p=1,q=0;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=2*i-1; j++)
        printf("%d",p);
        printf("\n");
    }
    for(i=5; i<=n; i++)
    {
        for(j=1; j<=2*(n-i+1)-1; j++)
        printf("%d",p);
        printf("\n");
    }

    return 0;
}
/*
xviii.1
      010
      10101
      0101010
      10101
      010
      1
*/

