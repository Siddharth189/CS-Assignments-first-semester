#include <stdio.h>

int main()
{
  int p,t;
  float r,si;

  //calculation of SIMPLE INTEREST
    si=(p*r*t)/100;

  printf("Enter the value of PRICIPLE AMOUNT,RATE OF INTEREST,YEARS ");
  scanf("%d",&p,&r,&t);
 /* printf("Enter the value of  ");
  scanf("%d",r);
  printf("Enter the value of YEARS");
  scanf("%d",t);*/

   printf("%d",si);
return 0;
}
