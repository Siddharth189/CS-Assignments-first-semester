# include <stdio.h>

typedef double (*DoubleFunctionDouble)(double);


double add(double x, double y)
{
     return x + y;

}
 DoubleFunctionDouble curryAdd(double x){   // currying
 double f(double y)   // nested function; not allowed in C; GCC extension
{
     return x + y;

}
 return f;

}  int main(int argc, char *argv[])
{
     printf("%g\n", add(3.2, 5.6));
     printf("%g\n", curryAdd(3.2)(5.6));
     return 0;

}

