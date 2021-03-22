#include<stdio.h>

int main()
{
    //13. Write a program in C to check whether a triangle is valid or not. Consider all sides of the triangles as inputs

    int a=4,b=4,c=5;



    if(((a+b)>c)||((b+c)>a)||((a+c)>b))
    {
        printf("triangle is valid");
    }
    else
    {
       printf("triangle is not valid");
    }

return 0;
}
