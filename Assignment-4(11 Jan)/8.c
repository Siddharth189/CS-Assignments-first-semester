///8. Write a program in C to find the the least common multiple(LCM)of two numbers.
# include<stdio.h>

int main()
{
    int a=6, b=8;
    int lcm= b>a?b:a;


    for(  ;lcm<=a*b; lcm+=b)
    {
        printf("Checking %d\n", lcm);
        if((lcm%6==0)&&(lcm%8==0))
           break;
    }
    printf("\nlcm of %d and %d is:%d",a,b,lcm);

    return 0;
}
