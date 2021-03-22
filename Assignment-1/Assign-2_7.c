#include<stdio.h>
#include<math.h>

int main ()
{
 //   7. Write a program in C to calculate compound interests.  A = P(1 + \frac{r}{n})^{t}

   int p=1000, t=4, n=7;
   float r=7.55, Final_Amount;

   Final_Amount = p*pow((1+r/100),t);

   printf("%f",Final_Amount);

 return 0;
}
