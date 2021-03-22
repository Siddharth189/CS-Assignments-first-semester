///3. Write a function in C to check whether an array is a subset of another array.
#include<stdio.h>


int checksubset(int m, int n)
{
    int p[5];
    int q[3];
    int count=0;


    printf("Enter %d elements of bigger array: ", m);
    for(int i=0; i<m; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\n");
    for(int i=0; i<m; i++)
    {
        printf("%d", p[i]);
    }

    printf("\n\nEnter %d elements of bigger array: ", n);
     for(int i=0; i<n; i++)
    {
        scanf("%d", &q[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d", q[i]);
    }
    printf("\n\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(q[i] == p[j])
            {
                count++;
            }

        }
    }
    if(count >= n) {
        printf("\nThe smaller array is a subset of bigger array");
    }

    else {
        printf("\nThe smaller array is not a subset of bigger array");
    }

    printf("\n");

return 0;
}


int main()
{
    int n = 3;
    int m = 5;

    checksubset(m, n);


return 0;
}
