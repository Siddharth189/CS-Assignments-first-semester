///1. Write a program in C to read the following types of variables using the scanf function: char, int, float, and double
#include<stdio.h>


int main()
{

    char c;
    printf("Enter any character ");
    scanf("%c",&c);

    int i;
    printf("Enter any integer ");
    scanf("%d",&i);

    float f;
    printf("Enter any float ");
    scanf("%f",&f);


    double d;
    printf("Enter any double value ");
    scanf("%g",&d);


    return 0;
}
