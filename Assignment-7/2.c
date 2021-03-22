///2. write a function in C that takes two pointers to integers and swaps the variables.
#include<stdio.h>


int swap(int *pa, int *pb)
{
    int c = *pa;
    *pa = *pb;
    *pb = c;

}
int main()
{

    int a, b;

    printf("Enter the value of a and b ");
    scanf("%d %d", &a, &b);
    printf("\nEarlier a was %d, and b was %d", a, b);

    int *pa, *pb;

    pa=&a;
    pb=&b;

        swap(&a, &b);

        printf("\n\nNow a is %d, and b is %d\n", a, b);

    return 0;
}
