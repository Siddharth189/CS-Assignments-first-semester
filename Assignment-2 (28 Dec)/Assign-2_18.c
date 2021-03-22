#include<stdio.h>
#include<math.h>

int main ()
{
// 18. Write a program in C to reverse a five-digit positive integer.
//       For instance, if the number is 13257, the output needs to be 75231. Do not use any loop construct

     int a=1 ,b=3 ,c=2 ,d=5 ,e=7 ,num , reverse_of_num ;

  num = ( a * 10000 ) + ( b * 1000 ) + ( c * 100 ) + ( d * 10 ) + ( e * 1 ) ;

  reverse_of_num =  ( e * 10000 ) + ( d * 1000 ) + ( c * 100 ) + ( b * 10 ) + ( a * 1 ) ;

  printf("%d\n",num);

  printf("Reverse is %d",reverse_of_num);





 return 0;
}
