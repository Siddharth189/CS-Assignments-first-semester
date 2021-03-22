#include<stdio.h>
#include<math.h>

int main ()
{
// 14. Write a program in C to extract the individual digits of a given number (a positive integer) and add them.
//        Assume the number has at most five digits. Do not use any loop construct

  /*int a=1 ,b=2 ,c=3 ,d=4 ,e=5 ,num , sum_of_digit ;

  num = ( 10000 * a )+ ( 1000 * b ) + ( 100 * c ) + ( 10 * d ) + ( 1 * e ) ;

  printf("%d\n",num);
*/

int a,b,c,d,e;
int num = 98364;

a = num%10;
num = num/10;
b = num%10;
num = num/10;
c = num%10;
num = num/10;
d = num%10;
num = num/10;
e = num%10;

int sum_of_digit = a+b+c+d+e ;

printf("%d\n",sum_of_digit);

return 0;
}
