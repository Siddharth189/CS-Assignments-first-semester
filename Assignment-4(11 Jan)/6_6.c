#include<stdio.h>
#include<math.h>

int main()
{
    float n=100.0;

    float s_sinx=0.0;
    float val=0.0;
    float sign=1.0;
    float x = 0.3 ;
    float fact_i = 1.0 ;
    float i = 0.0 ;
    ///TO find factorial of a number///

    /// printf("\nFactorial of %g is: %g",n,fact);
    for(i=1; i<=100; i=i+2)

    {
        for(float j=1; j<=i; j++)
        {
            fact_i *= j;

        }
        val=((sign*(pow(x,i)))/(fact_i));
        sign=-1.0;
        s_sinx = s_sinx + val;

    }
    printf("\n%f",s_sinx);

    return 0;
}




