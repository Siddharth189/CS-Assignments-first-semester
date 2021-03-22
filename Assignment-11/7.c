/*7. Define a structure S that has two member variables:
(i)a member of type int and(ii) a member that of a nested-structure, P.
P has two member variables:
(i) a member variableoftypechar,and(ii)a member variable of a nested-unionU.U has a member
oftypecharandamemberoftypeﬂoat. Create an object ofthisstructure. Scan each of the s member variables from the keyboard.
Printeachofthesemembervariables
*/
#include<stdio.h>

struct student
{
    int intVar;
    struct P
    {
        char charVar;
        union U
        {
            char CharVar;
            float floatVar;
        }u;

    }p;


};

int main()
{
    struct student obj = {0};

    scanf("%d%c%c%f", &obj.intVar, &obj.p.charVar, &obj.p.u.CharVar, &obj.p.u.floatVar);


return 0;
}
