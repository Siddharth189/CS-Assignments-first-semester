///10. Write a program in C to separate odd and even integers stored in an array into two separate arrays
#include<stdio.h>
#include<stdlib.h>

int countOdd(int *b,int size)
{
    int Codd=0;
    char *c = (char *) calloc( size, (sizeof(char)));
    int *aodd = (int *) calloc( size, (sizeof(int)));
    int  *aeven = (int *) calloc( size, (sizeof(int)));

    for(int i=0; i<size; i++)
    {
        if(c[i]==0)
        {
            if(b[i]%2==1)
            {
                Codd++;
                c[i]=1;
                ///printf("\nodd = %d", b[i]);
                aodd[i]=b[i];
            }
            else
            {
                Codd++;
                c[i]=1;
                ///printf("\neven = %d", b[i]);
                aeven[i]=b[i];

            }
        }
    }
    printf("\n\nEven element containing array\n");

        for(int i=0; i<5; i++){
             if(aeven[i]!=0){
        printf("%d ",aeven[i]);
    }}

     printf("\n\nOdd element containing array\n");

        for(int i=0; i<5; i++){
         if(aodd[i]!=0){
        printf("%d ",aodd[i]);
    }}



free(c);

return Codd;
}

int main()
{
    int a[5],s;
    printf("enter the element of array ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    int odd = countOdd(a,5);



    return 0;
}
