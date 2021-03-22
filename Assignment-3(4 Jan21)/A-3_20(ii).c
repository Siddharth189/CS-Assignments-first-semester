#include<stdio.h>
int main()
{
    int marks=95;

    if(marks>100)
    {
        printf("X");
        printf("\nError with the input marks.");
    }
    else if(marks>=90)
    {
        if(marks<=100)
        {
            printf("A");
        }
    }
    else if(marks>=80)
    {
        if(marks<=89)
        {
            printf("B");
        }
    }
    else if(marks>=70)
    {
        if(marks<=79)
        {
            printf("C");
        }
    }
    else if(marks>=60)
    {
        if(marks<=69)
        {
            printf("D");
        }
    }
    else if(marks>=50)
    {
        if(marks<=59)
        {
            printf("E");
        }
    }
    else if(marks>=40)
    {
        if(marks<=49)
        {
            printf("p");
        }
    }
    else if(marks>=0)
    {
        if(marks<40)
        {
            printf("F");
        }
    }

    else if(marks<0)
    {
        printf("X");
        printf("\nError with the input marks.");
    }


    return 0;
}
