#include<stdio.h>
#include<math.h>

int main ()
{
//8.Write a program in C to solve a quadratic equation. If the equation is ax2 +bx+c = 0, then a, b, and c are inputs.

    float a=2, b=4, c=-2,d,root1;


    d=b*b-4*a*c;


   root1=(-b+sqrt(d))/2;

   printf("%f",root1);


 return 0;
}
