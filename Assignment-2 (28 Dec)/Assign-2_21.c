#include<stdio.h>
#include<math.h>

int main ()
{
// 21. Write a program in C to swap two int variables without using a third variable.


int a=10, b=20;

printf("Before swap a=%d b=%d",a,b);

a=a+b;

b=a-b;

a=a-b;

printf("\nAfter swap a=%d b=%d",a,b);


return 0;
}
