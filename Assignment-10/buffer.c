# include <stdio.h>
#include <string.h>


int n=0;
void swap(char *a, int *i)
{
    for(int j=*i-1; j>=n; j--)
    {
        printf("%c",a[j]);
    }
    n=*i+1;
    printf(" ");
}


int string_is_reverse(char *sent1)
{
    int i, j;
    char t;

    for(i = 0; sent1[i]; i++)
    {
    }
    i = i-1;
    for(j=0 ; j < i; i--, j++)
    {
        t = sent1[i];
        sent1[i] = sent1[j];
        sent1[j] = t;
    }

    printf("%s", sent1);

    return 0;
}

int main()
{
    char a[100];
    gets(a);
    int lent=strlen(a);
    for(int i=0; i<lent; i++)
    {
        if(a[i]== ' ')
        {
            swap(a, &i);
        }

    }

    printf("\n");
    string_is_reverse(a);

    return 0;
}
