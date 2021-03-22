#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void step(int i, int j, char * str, char * str3)
{
    for(i; str[i] != ' '; i++)
    {

    }
    i--;
    for(j; j < i; j++, i--)
    {
        swap(&str[j], &str[i]);
    }
    printf("%d %d\n", i, j);
}
int main()
{
    int length, i = 0, j = 0, k = 0;

    char str[] = "How keep you.";
    int len = strlen(str);
    char *str3 = (char *) malloc(len * sizeof(char));

    char *temp = (char *) malloc(len * sizeof(char));
    puts(str);


    for(int k=0; str[k]; k++)
    {

        step(i, j, str, str3);

        for( i; str[i] != ' '; i++)
        {

        }
        for( j; str[j] != ' '; j++)
        {

        }
        i += 1;
        j += 1;
        //printf("%d %d\n", i+1, j+1);
        //step(i, j, str, str3);

    }


    //puts(str);
    return 0;
}
