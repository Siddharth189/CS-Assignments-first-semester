#include<stdio.h>

int main()
{
    int basic=75000;
    int gross=0;

    if( basic <= 30000 )
    {
        gross = basic * 0.20 + basic * 0.30 ;
    }
    else if( basic <= 60000 )
    {
        gross = basic * 0.25 + basic * 0.35 ;
    }
    if( basic >= 60000 )
    {
        gross = basic * 0.30 + basic * 0.40 ;
    }

    printf("Your gross salary is %d",gross);

    return 0;
}
