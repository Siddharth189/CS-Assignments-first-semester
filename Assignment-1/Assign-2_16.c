#include<stdio.h>
#include<math.h>

int main ()
{
// 16. Write a program in C to calculate the sum of the digits of a five-digit positive integer.
 //       Do not use any loop construct.

    int a=1 ,b=2 ,c=3 ,d=4 ,e=5 ,num , sum_of_digit ;

  num = ( 10000 * a )+ ( 1000 * b ) + ( 100 * c ) + ( 10 * d ) + ( 1 * e ) ;

  printf("%d\n",num);

  sum_of_digit = a+b+c+d+e ;

  printf("Sum Of Digits is->>%d",sum_of_digit);






 return 0;
}
