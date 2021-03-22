#include<stdio.h>
#include<math.h>

int main ()
{
 //   6. Write a program in C to calculate simple interests

  int p=1000, t=4;

  float r=7.55, si;

  si= (p*r*t)/100 ;

  printf("%.5f",si);

 return 0;
}
