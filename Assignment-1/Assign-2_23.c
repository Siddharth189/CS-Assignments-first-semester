#include<stdio.h>
#include<math.h>

int main ()
{
//23. Write a program in C to find the minimum of three numbers.

 int a=5 , b=3 ,min ,c=10 ;

     min = (a<b)&&(a<c)?a:(c<b)&&(c<a)?c:b;


 printf("%d",min);


return 0;
}
