#include<stdio.h>

int main()
{
    int n=145;
    int m=n;

    int s_fact=0;


    while(m)
    {
        int z=m%10;
        int fact=1;
        for(int i=1; i<=z; i++)
        {
            fact*=i;
        }
        s_fact += fact;
        m/=10;
    }
    printf("s_fact is %d\n",s_fact);
    if(n==s_fact)
    {
        printf("StrongNumber");
    }
    else
    {
        printf("Not A StrongNumber");
    }


    return 0;
}
///18. Write a program in C to check whether a number is a Strong number or not.
///Strong number is a special number whose sum of factorial of digits is equal to the original number.
///For example: 145 is strong number. Since, 1! + 4! + 5!
