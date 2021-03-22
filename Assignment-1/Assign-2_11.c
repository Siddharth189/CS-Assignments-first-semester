#include<stdio.h>
#include<math.h>

int main ()
{
// 11. Given the initial velocity (u), acceleration (a), and the time (t),
//       write a program in C to compute the final displacement of an object.

  int u = 30, s , a = 2 , t = 3 ;

  s = u * t + (1/2*((a * t)*(a * t)));

  printf("%d",s);


 return 0;
}
