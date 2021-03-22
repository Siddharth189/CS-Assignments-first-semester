///6. Define a union that contains (i) a char variable, (ii) an int variable, (iii) a float variable, and
///(iv) a double variable. Now, perform following:
#include<stdio.h>

union linux_t{
    int intVar;
    char charVar;
    float floatVar;
    double doubleVar;
};

void scanObj(union linux_t* p_obj4)
{
    scanf("%d", &p_obj4->intVar);
}
void printObj(union linux_t obj4)
{
    printf("\ncharVar = %c, floatVar = %f, doubleVar = %g\n", obj4.charVar, obj4.floatVar, obj4.doubleVar);
}

int main()
{
    union linux_t  obj = {9.5604979863572};

    printf("&linux_t = %d, \n&charVar = %d, \n&intVar = %d, \n&floatVar = %d, \n&doubleVar = %d", &obj, &obj.charVar,
           &obj.intVar, &obj.floatVar, &obj.doubleVar);

    printf("\n\nSize of obj object = %d\n", sizeof(obj));

    union linux_t  obj2 = {0};
    obj2.charVar = 'G';
    printf("\n***** object2 *******");
    printf("\nintVar = %d, floatVar = %f, doubleVar = %g\n", obj2.intVar, obj2.floatVar, obj2.doubleVar);

    union linux_t  obj3 = {0};
    obj2.intVar = 40;
    printf("\n***** object3 *******");
    printf("\ncharVar = %c, floatVar = %f, doubleVar = %g\n", obj2.charVar, obj2.floatVar, obj2.doubleVar);


    union linux_t  obj4 = {0};
    scanObj(&obj4);
    printObj(obj4);

    return 0;
}
