#include<stdio.h>
#include<math.h>

int main ()
{
//  15. Write a program in C to reverse a number (a positive integer).
//         Assume the number has at most five digits. Do not use any loop construct.

  int a=1 ,b=2 ,c=3 ,d=4 ,e=5 ,num , reverse_of_num ;

  num = ( a * 10000 ) + ( b * 1000 ) + ( c * 100 ) + ( d * 10 ) + ( e * 1 ) ;

  reverse_of_num =  ( e * 10000 ) + ( d * 1000 ) + ( c * 100 ) + ( b * 10 ) + ( a * 1 ) ;

  printf("%d\n",num);

  printf("Reverse is %d",reverse_of_num);

 return 0;
}
