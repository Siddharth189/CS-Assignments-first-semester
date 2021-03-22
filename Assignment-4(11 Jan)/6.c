#include<stdio.h>

int main()
{
    int n=2;\
    double s=0.0;
    double val=0.0;
     //printf("\n%f",s);
    for(double i=1;i<=2;i++)
    {
        //printf("%d\n",i);
        val=(1.0/i);
        s = s + val;
        printf("%lf\n",val);
    }
    printf("\n%lf",s);

    return 0;
}
