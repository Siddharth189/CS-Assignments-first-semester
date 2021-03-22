#include<stdio.h>
#include<math.h>

int main()
{
    int n=10;

    float s_l=0.0;
    float val=0.0;
    float sign=1.0;
    float x = 0.2 ;

    for(int i=1; i<=2; i++)
    {
        val=((sign*(pow(x,i)))/(i));

        printf("%g  ",val);
        s_l = s_l + val;
        sign*=-1.0;
   }
    printf("\n%g",s_l);

    return 0;
}


