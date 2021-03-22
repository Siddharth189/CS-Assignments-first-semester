#include<stdio.h>
int main()
{
    int marks=10;


    (marks>100)?printf("X"),printf("\nError with the input marks."):
    ((marks>=90)&&(marks<=100))?printf("A"):
    ((marks>=80)&&(marks<=89))?printf("B"):
    ((marks>=70)&&(marks<=79))?printf("C"):
    ((marks>=60)&&(marks<=69))?printf("D"):
    ((marks>=50)&&(marks<=59))?printf("E"):
    ((marks>=40)&&(marks<=49))?printf("P"):
    ((marks>=0)&&(marks<40))?printf("F"):(marks<0)?printf("X"):printf("Error");




    return 0;
}

