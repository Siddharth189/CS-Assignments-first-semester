///Over 1: ####
///Over 2: ##
///Over 3:
///Over 4: ##########
///Over 5: #######
#include<stdio.h>

int main()
{
    int n=5;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("Over %d:",i);
            for(int j=1; j<=4; j++)
            {
                printf("#");
            }
        }
        else if(i==2)
        {
            printf("\nOver %d:",i);
            for(int j=1;j<=2; j++)
            {
                printf("#");
            }
        }
        else if(i==3)
        {
            printf("\nOver %d:",i);
            for(int j=1; j<=0; j++)
            {
                printf("#");
            }
        }
        else if(i==4)
        {
            printf("\nOver %d:",i);
            for(int j=1; j<=10; j++)
            {
                printf("#");
            }
        }
        else if(i==5)
        {
            printf("\nOver %d:",i);
            for(int j=1; j<=7; j++)
            {
                printf("#");
            }
        }
    }

    return 0;
}
