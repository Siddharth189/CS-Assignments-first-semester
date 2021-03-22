/*1. Writeamenu-basedprograminCusingdo... whileloopconstructandswitch... case to perform four operations:
(i) addition of two integers, (ii) deletion of one integer from another integer, (iii) multiplication of two integers,
(iv) division of one integerbyanotherinteger,and(iv)terminationoftheprogram. Iftheuserprovides a wrong choice, the user
should get the menu back.
*/
#include<stdio.h>

int main()
{
    int n, p = 1;
    int a, b, c;
    printf("Enter two number: ");
    scanf("%d %d", &b, &c);

    while(p)
    {
        printf("Choose 1 for ADD, 2 for SUB, 3 for MUL, 4 for DIV, and 0 to Exit: ");
        scanf("%d", &n);
        switch(n)
        {
        case 0:
            p--;
            break;
        case 1:
            a = b + c;  printf("%d\n", a);
            break;
        case 2:
            a = b - c;  printf("%d\n", a);
            break;
        case 3:
            a = b * c;  printf("%d\n", a);
            break;
        case 4:
            a = b / c;  printf("%d\n", a);
            break;

        default:
            printf("Wrong choice, Try again\n ");
        }

    }


    return 0;
}
