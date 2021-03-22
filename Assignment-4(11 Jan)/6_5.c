#include<stdio.h>
#include<math.h>

int main()
{
    float n=4.0;

    float s_ex=0.0;
    float val=0.0;
    float sign=1.0;
    float x = 0.3 ;
    float fact_i = 1.0 ;
    ///TO find factorial of a number///

   /// printf("\nFactorial of %g is: %g",n,fact);
    for(float i=0; i<=2; i++)
    {
           for(float j=1; j<=i; j++)
    {
        fact_i *= j;
    }
        val=((sign*(pow(x,i)))/(fact_i));
        s_ex = s_ex + val;

    }
    printf("\n%0.2g",s_ex);

    return 0;
}



