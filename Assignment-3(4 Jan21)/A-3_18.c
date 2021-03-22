#include<stdio.h>

int main()
{
    //18. Write a program in C to find if a year is a leap year. Do not use &&, ||, and ?: operators

    int a=2020;

    if(a%400==0)
    {
        printf("Given year is a leap year");

    }
    else if(a%4==0)
    {
        if(a%100!=0){
        printf("Given year is a leap year");

    }}
    else
    {
          printf("Given year is not a leap year");
    }



    return 0;
}
