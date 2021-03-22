#include<stdio.h>
int main()
{
    int n=143;

    int a=n%10;
    int b=(n/10)%10;
    int c=(n/100)%10;


    if(n==((a*a*a)+(b*b*b)+(c*c*c)))
    {
        printf("arm strong  number ");
    }
    else
    {
        printf("not arm strong number");
    }
    return 0;
}
