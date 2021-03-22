///19. Write a program in C to print the factors of a given number.
#include<stdio.h>

int main()
{
    int n=10;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0){

            printf("%d,",i);
        }

    }
    printf("are the factors of %d",n);



    return 0;
}
