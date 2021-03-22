///10. Write a program in C to count the number of digits in a number.
# include<stdio.h>

int main()
{
    int n=1408;
    int m=n;
    int digit=0;
    int p=0;

    for(;m;)
    {
        p=(m%10);
        p=(p/p);
        digit+=p;
        m/=10;
    }

    printf("\nnumber of digit in %d is:%d",n,digit);

    return 0;
}

