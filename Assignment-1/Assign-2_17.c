#include<stdio.h>
#include<math.h>

int main ()
{
// 17. Write a program in C to calculate the product of the digits of a five-digit positive integer.
//     Do not use any loop construct.


  int a=1 ,b=2 ,c=3 ,d=4 ,e=5 ,num , product_of_digit ;

  num = ( 10000 * a )+ ( 1000 * b ) + ( 100 * c ) + ( 10 * d ) + ( 1 * e ) ;

  printf("%d\n",num);

  product_of_digit = a*b*c*d*e ;

  printf("product_of_digit = %d\n",product_of_digit);



 return 0;
}
