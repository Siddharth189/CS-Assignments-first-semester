#include<stdio.h>

int main()
{
    //19. Write a program in C to find a minimum of three numbers. Do not use &&, ||, and ?: operators.

    int a=4, b=2, c=6;

    if(a<b)
    {
        if(a<c){
            printf("%d",a);
    }}
    else if(b<a)
    {
        if(b<c){
            printf("%d",b);
    }}
    else
    {
        printf("%d",c);
    }

    return 0;
}
