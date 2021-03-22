#include<stdio.h>
#include<math.h>

int main ()
{
// 20. Write a C program to swap two int variables using a third variable.


int var1, var2, temp;

printf("Before Swapping First variable = %d \nSecond variable = %d", var1, var2);
temp = var1;

var1 = var2;

var2 = temp;

printf("\nAfter Swapping First variable = %d \nSecond variable = %d", var1, var2);

return 0;
}



