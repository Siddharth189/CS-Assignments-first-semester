#include<stdio.h>

int main()
{
    int n=4;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf("%d",n-i+1);
        }
        printf("%d\n",n-i+1);

    }
    return 0;
}





