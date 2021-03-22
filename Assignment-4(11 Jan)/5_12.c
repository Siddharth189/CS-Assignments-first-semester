#include<stdio.h>

int main()
{
    int n=5, k=1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}



/*xii. For this, consider n = 5 unlike others.
1
23
456
7890
12345  */
