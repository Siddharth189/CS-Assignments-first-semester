/*8. Write a program in C to word-wise reverse each sentence in a paragraph. The paragraph (string) is user input. For instance, for input string
This is an example. Another sentence goes here.
the output should be
example an is This. here goes sentence Another.*/
/*8. Write a program in C to word-wise reverse each sentence in a paragraph. The paragraph (string) is user input. For instance, for input string
This is an example. Another sentence goes here.
the output should be
example an is This. here goes sentence Another.*/
#include <stdio.h>
#include <string.h>


void reverse(char *a,int n)
{
    int j=0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]==' ')
        {
            for(int k=i+1; k<i+j+1; k++)
                printf("%c",a[k]);
            printf("%c",a[i]);
            j=0;

        }
        else if(i==0)
        {
            for(int k=0; a[k]!=' '; k++)
                printf("%c",a[k]);

        }

        else
            j++;

    }
}
void reverse2(char *a,int n)
{
    int j=0,k=0;
    for(int i=0; i<n; i++)
    {
        if(a[i-1]=='.'&& a[i]==' ')
            continue;
        j++;
        if(a[i]=='.')
        {
            reverse(a+k,j-1);
            k+=j;
            if(a[k]==' ')
                printf("%c%c",a[i],a[k]);
            else
                printf("%c",a[i]);

            if(a[k]==' ')
                k+=1;

            j=0;
        }
    }
}


int main()
{
    char a[200];
    gets(a);
    int n=(int)strlen(a);
    a[n]='\0';

    reverse2(a,n);
    return 0;
}

