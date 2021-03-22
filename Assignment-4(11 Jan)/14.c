///14. Write a program in C to reverse a number.
#include<stdio.h>

int main()
{
    int n=324;
    int reverse=0;

    while (n)
    {
        reverse = reverse * 10 + n % 10;
        n /=10;
    }

    printf("reverse = %d",reverse);



    return 0;
}
