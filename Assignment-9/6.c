///6. Write a function in C to implement a linear search on an array.
#include<stdio.h>


int main()
{
    int arr[10] = {1,2,3,4,4,5,6,7,7,8};
    int x;

    printf("Enter the number you want to search: ");
    scanf("%d",&x);

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == x)  printf("%d is present at index %d\n", x, i);
    }
    printf("\n");


return 0;
}
