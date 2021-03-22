///2. Write a macro to find the larger number of two numbers.
#include <stdio.h>

#define max(x,y) ((x>y)?x:y)

int main()
{
	int num1, num2, Max;

	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);

	Max=max(num1, num2);
	printf("Maximum number is: %d\n",Max);

	return 0;
}
