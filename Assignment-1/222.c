#include <stdio.h>

int main()
{
  // finding the area of triangle whose sides a,b,c are taken in inputs,,,,

  //int a, b, c;


  float area,s,a,b,c;

  printf("Enter the sides of triangle :");

  scanf("%f%f%f", &a, &b, &c);

    s=(a+b+c)/2;

   printf("The semi-perimeter for triangle is :%.2f\n",s);

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("\nThe area of given triangle is : %.2f\n",area);

    return 0;
}
