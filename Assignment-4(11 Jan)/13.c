///13. Write a program in C to print the sum and product of digits of an integer.
#include<stdio.h>

int main()
{
    int s=0;
    int p=1;
    int n=273;
    int m=n;
    int z=1;

    for(;m;)
    {
        z = m%10;
        s += z;
        p *= z;
        m /= 10;
    }
    printf("sum of digit is %d\n",s);
    printf("product of digit is %d",p);

    return 0;
}
