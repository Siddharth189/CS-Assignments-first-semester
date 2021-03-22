#include<stdio.h>
#include<math.h>

int main ()
{
// 13. Write a program in C to convert temperature in oF to oC.

    //F = (C x 1.8) + 32

  float C  , F = 97.87 ;

    C = ( F - 32 ) * 5/9  ;

  printf("%f",C);



 return 0;
}
