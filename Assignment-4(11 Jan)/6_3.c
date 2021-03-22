#include<stdio.h>

int main()
{
    int n=10;

    float s_pi=0.0;
    float val=0.0;
    float sign=1.0;

    for(int i=1; i<=10; i++)
    {
        val=((sign*4.0)/(2*i-1));
        sign*=-1.0;
        printf("%g\n",val);
        s_pi = s_pi + val;

    }
    printf("\n%g",s_pi);

    return 0;
}


