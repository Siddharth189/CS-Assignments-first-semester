#include<stdio.h>

int main()
{
    //3. Write a program in C to check whether a number is divisible by either 7 or 13, or not.

    int n=91;

    if((n%7==0)&&(n%13==0)){
        printf("n is divisible by 7 and also by 13");
    }
    else if(n%13==0){
        printf("n is divisible by 13 ");
    }
        else if(n%7==0){
        printf("n is divisible by 7 ");
    }
    else {
        printf("n is not divisible by 13 as well as by 7 ");
    }

    return 0;
}
