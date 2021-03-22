/*9. Given a non-negative integer n belongs to [0,100000000], write a program in C to print it in words.
For instance, for the input integer n = 19450274, the output should be-
One Crore Ninety Four Lakhs Fifty Thousand Two Hundred Seventy Four*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void value(int *arr, int i)
{
        if(arr[i] == 1)  printf("one");
        if(arr[i] == 2)  printf("two");
        if(i == 2)  printf(" hundred ");
        if(arr[i] == 3)  printf("three");
        if(arr[i] == 4)  printf("four");
        if(arr[i] == 5)  printf("five");
        if(arr[i] == 6)  printf("six");
        if(arr[i] == 7)  printf("seven");
        if(arr[i] == 8)  printf("eight");
        if(arr[i] == 9)  printf("nine");
         if(i == 0)  ;
        if(i == 1)  ;
        if(i == 2)  printf(" hundred ");
        if(i == 3)  printf(" thousand");
        if(i == 4)  printf(" ten thousand ");
        if(i == 5)  printf(" lakhs ");
        if(i == 6)  printf(" ten lakhs ");
        if(i == 7)  printf(" crore ");
}
/*void place(int i){
        if(i == 0)  ;
        if(i == 1)  ;
        if(i == 2)  printf(" hundred ");
        if(i == 3)  printf(" thousand");
        if(i == 4)  printf(" ten thousand ");
        if(i == 5)  printf(" lakhs ");
        if(i == 6)  printf(" ten lakhs ");
        if(i == 7)  printf(" crore ");

}*/

int main()
{
    int num = 198;
    int arr[3] = {0, };

    for(int i=0; num; i++)
    {
        arr[i] = num % 10;
        num /= 10;
    }
    for(int i=0, j = 3-1; i < j; i++, j--)
    {
        swap(&arr[i], &arr[j]);
    }
    for(int i=0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == 1)  value(arr, i); //place(i);
        if(arr[i] == 2)  value(arr, i); //place(i);
        if(arr[i] == 3)  value(arr, i); //place(i);
        if(arr[i] == 4)  value(arr, i); //place(i);
        if(arr[i] == 5)  value(arr, i); //place(i);
        if(arr[i] == 6)  value(arr, i); //place(i);
        if(arr[i] == 7)  value(arr, i); //place(i);
        if(arr[i] == 8)  value(arr, i); //place(i);
        if(arr[i] == 9)  value(arr, i); //place(i);
    }

    return 0;
}




