#include<stdio.h>
#include<math.h>

int main ()
{
// 20. Write a C program to swap two int variables using a third variable.


int a, b, c;

printf("Before Swapping First variable = %d \nSecond variable = %d", a, b);
c = a;

a = c;

b = c;

printf("\nAfter Swapping First variable = %d \nSecond variable = %d", a, b);

return 0;
}



