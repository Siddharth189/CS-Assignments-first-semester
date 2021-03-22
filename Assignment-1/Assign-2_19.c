#include<stdio.h>
#include<math.h>

int main ()
{
// 19. Write a program in C to check if a five-digit positive integer is palindrome or. For instance,
//     the number is 13531 is a palindrome. Do not use any loop construct. You cannot use any if () statement.
//     If it is a palindrome number, print Y. Otherwise, print N


    int a , b , c , d , e , num ;
    a = 1,b=1,c=1,d=1,e=9;

    num = ( a * 10000 ) + ( b * 1000 ) + ( c * 100 ) + ( d * 10 ) + ( e * 1 ) ;

    ((b==d) && (a==e))?printf("The number is palindrome "):printf("Number is not palindrome ");


 return 0;
}
