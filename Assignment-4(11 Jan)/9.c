///9. Write a program in C to ﬁnd the greatest common divisor (GCD) of two numbers.
# include<stdio.h>

int main()
{
    int a=100, b=80;
    int gcd= a > b ? b : a;
    printf("gcd is initially %d\n",gcd);
    for(;gcd>=1;gcd--)
    {
        printf("Checking %d\n", gcd);
        if((b%gcd==0)&&(a%gcd==0))
           break;
    }
    printf("\ngcd of %d and %d is:%d",a,b,gcd);

    return 0;
}

