#include<stdio.h>

int main()
{
    //4. Write a program in C to check whether a number is divisible only by either of 7and 13 (but not both), or not.

    int n=45;

    if((n%7==0)^(n%13==0))
    {
        printf("n is only divisible either by 7 or by 13");
    }
    else{
        printf("n is divisible 91 or it is not divisible by 7 or 13");
    }
    return 0;
}
