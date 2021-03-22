#include<stdio.h>
int main()
{
    int marks=175;

    if((marks>=90)&&(marks<=100))
    {
        printf("A");
    }
    else if((marks>=80)&&(marks<=89))
    {
        printf("B");
    }
    else if((marks>=70)&&(marks<=79))
    {
        printf("C");
    }
    else if((marks>=60)&&(marks<=69))
    {
        printf("D");
    }
    else if((marks>=50)&&(marks<=59))
    {
        printf("E");
    }
    else if((marks>=40)&&(marks<=49))
    {
        printf("p");
    }
    else if((marks>=0)&&(marks<40))
    {
        printf("F");
    }
    else if((marks>100)||(marks<0))
    {
        printf("X");
        printf("\nError with the input marks.");
    }

    return 0;
}
