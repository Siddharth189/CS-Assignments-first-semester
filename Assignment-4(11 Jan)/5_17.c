#include<stdio.h>

int main()
{
    int i,j,l,n=7,m=5;

    for(i=1; i<m; i++)
    {
        for(j=1; j<=n-i-2; j++)
        {
            printf("("); //print upper half triangle part
        }
        //printf("\n");
        for(j=1; j<=i-1; j++)
        {
            printf("  "); //print upper half triangle part
        }
        //printf("\n");
        for(j=1; j<=n-i-2; j++)
        {
            printf(")"); //print upper half triangle part
        }
       // printf("\n");
         printf("\n");
    }

    for(i=5; i<=n; i++)
    {
        for(j=1; j<=i-3; j++)
        {
            printf("("); //print lower half triangle part
        }
        //printf("\n");
        for(j=1; j<=n-i; j++)
        {
            printf("  "); //print upper half triangle part
        }
        //printf("\n");
        for(j=1; j<=i-3; j++)
        {
            printf(")"); //print upper half triangle part
        }
       // printf("\n");
         printf("\n");

    }

    return 0;
}
/*
xiii.
xvii.  (((())))
       (((  )))
       ((    ))
       (      )
       ((    ))
       (((  )))
       (((())))
*/


