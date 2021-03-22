#include<stdio.h>

int main()
{
    //14. Write a program in C to check whether a triangle is an equilateral, isosceles, or scalene triangle.
     //   Consider all sides of the triangles as inputs

    int a=60,b=60,c=60;

    if((a==b)&&(b==c)&&(a==c)){
        printf("equilateral");
    }
    else if((a==b)||(a==c)||(b==c)){
        printf("isosceles");
    }
    else if((a!=b)&&(a!=c)&&(b!=c)){
        printf("scalene triangle");
    }
    return 0;
}
