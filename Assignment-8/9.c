///9. Write a program in C to count the frequency of each element of an array
#include<stdio.h>
#include<stdlib.h>

int unique(int *b,int size)
{
    int count=0;
    int *c = (int *) calloc( size, (sizeof(int)));
    char *flag = (char *) calloc( size, (sizeof(char)));
    int log[5]={0,0,0,0,0};

    for(int i=0; i<size; i++)
    {
        if(flag[i]==0)
        {
            for(int j=i+1; j<size; j++)
            {
                if(b[i]==b[j])
                {
                    count++;
                    c[i]+=1;
                    flag[i]=1;
                }
            }

        }
    }


    printf("\n\nFrequency of elements in the array \n");
    for(int m=0;m<size;m++){
        if(flag[m]!=0){
            printf("\nNumber %d is appeared %d times",b[m], c[m]+1);
        }
        else{
            printf("\nNumber %d is appeared %d times",b[m], 1);

        }
    }
     /**for(int n=0;n<size;n++){
        if(log[n]!=0){
            printf("\nNumber %d is appeared %d times",log[n], 1);
        }
    }
*/

    free(c);

    return 0;
}

int main()
{
    int a[5]={1,1,1,2,3}, s;
   /// printf("Enter the element of array: ");
    /**for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }*/

    int U = unique(a,5);


    return 0;
}

