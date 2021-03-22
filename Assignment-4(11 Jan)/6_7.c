#include<stdio.h>
#include<math.h>

int main()
{
    float n=4.0;
    float s_sinx=0.0;
    float val=0.0;
    float sign=1.0;
    float x = 2.0 ;
    float fact_i = 1.0 ;
    float i = 0.0 ;

    for(i=0; i<=4.0; i=i+2)
    if(i%2==0)
    {
        for(float j=1; j<=i; j++)
        {
            fact_i *= j;

        }
        printf("\n%g    %g",i,fact_i);
        val=((sign*(pow(x,i)))/(fact_i));
        sign=-1.0;
        s_sinx = s_sinx + val;

    }
    printf("\n%f",s_sinx);

    return 0;
}




