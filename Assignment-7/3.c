///3. Write a program in C to create an array of type int of size5.
///Use the scanf function to take user inputs initializing the array. Then, print the elements of the array.
#include<stdio.h>

int main()
{
    int arr[5];

    printf("Fill the array ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }



    return 0;
}
