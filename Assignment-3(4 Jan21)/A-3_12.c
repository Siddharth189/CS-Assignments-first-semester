#include<stdio.h>

int main()
{
    //12. Write a program in C to check whether a triangle is valid or not. Consider all angles of the triangles as inputs.

    int a=120,b=20,c=40;

    int s=a+b+c;

    if(s==180)
    {
        printf("triangle is valid");
    }
    else
    {
       printf("triangle is not valid");
    }


    return 0;
}
