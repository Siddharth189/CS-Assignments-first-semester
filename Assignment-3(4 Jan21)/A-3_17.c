#include<stdio.h>

int main()
{
    //17. Write a program in C to calculate total electricity bill according to the given conditions:

    int b=220,bill;

    if(b<=50)//i. For the first 50 units, the cost is rupees 2.50/unit
    {
        bill=b*2.5;
        printf("total electricity bill is %d",bill);
    }
    else if((b>50)&&(b<=125))//ii. For the next 75 units, the cost is rupees 3.00/unit.
    {
        bill=b*3;
      printf("total electricity bill is %d",bill);
    }
    else if((b>125)&&(b<=225))//iii. For the next 100 units, the cost is rupees 3.50/unit.
    {
        bill=b*3.5;
       printf("total electricity bill is %d",bill);
    }
    else if(b>225)//iv. For units above 225, the cost is Rs. 4.00/unit.
    {
        bill=((b*4)+((b*4)*(.5)));
      printf("total electricity bill is %d",bill);
    }

    return 0;
}
