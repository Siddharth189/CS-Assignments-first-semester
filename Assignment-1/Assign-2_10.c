#include<stdio.h>
#include<math.h>

int main ()
{
// 10. Given the initial velocity (u), acceleration (a), and the time (t),
//        write a program in C to compute the final velocity of an object


  int u = 30, v , a = 2 , t = 3 ;

  v = u + a * t;

  printf("%d",v);


 return 0;
}
