#include<stdio.h>
#include<math.h>

int main ()
{
 //9.Write a program in C to compute the area of a circle. The circumference of the circle is input. Consider π = 3.14
   int radius=3 ;

   float circum, area;

   circum= 2*(3.14)* radius ;

   area = ( circum * circum )/4 * 3.14 ;

   printf("%f",area);


 return 0;
}
