#include<stdio.h>
#include<math.h>

int main ()
{
 //    5. Write a C program to find the area of a triangle. The lengths of the sides of the triangle are inputs.

  int a=3, b=4, c=5;

  float Area,s;

  s=(a+b+c)/2;

    Area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("%f",Area);

 return 0;
}
