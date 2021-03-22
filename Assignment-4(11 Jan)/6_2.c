#include<stdio.h>

int main()
{
    int n=2;

    float s=0.0;
    float val=0.0;

    for(int i=1; i<=2; i++)
    {
        if(i%2==0)
        {
            i=(-1)*i;
        }
        val=(1.0/i);
        s = s + val;
        printf("%g\n",val);
    }
    printf("\n%g",s);

    return 0;
}

///ii. S2 = 1−1/2+1/3−1/4+···
