#include<stdio.h>
#include<math.h>

int main ()
{
// 25. Write a program in C to ﬁnd if a year is a leap year.
//If it is a leap year, print Y. Otherwise, print N. You cannot use any if () statement.


  int a=2002 ;

   ((a % 400 == 0)||((a % 4 ==0)&&(a % 100 != 100)))? printf("Yes") : printf("No");

return 0;
}
