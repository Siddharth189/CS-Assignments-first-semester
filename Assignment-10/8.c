/*8. Write a program in C to word-wise reverse each sentence in a paragraph. The paragraph (string) is user input. For instance, for input string
This is an example. Another sentence goes here.
the output should be
example an is This. here goes sentence Another.*/
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

/*
void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        *begin++;
        *end--;
    }
}

void reverseWords(char* s)
{
    char* temp;

    char* low;

    while(*temp)
    {
        temp++;
        if(*temp == '.')
        {
            reverse(low, temp-1);
            low = temp + 2;
        }
        else if(*temp == ' ')
        {
            reverse(low, temp-1);
            low = temp + 1;
        }
    }

    reverse(s, temp-1);
}
*/
void reverseWords(char *s)
{
    int i;
    char temp;

    for(i = 0; s[i] != ' '; i++);

    for(int j = 0; j < i; j++, i--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("%s", s);
}

int main()
{
    char s[100];
    gets(s);

    char* temp = s;

    reverseWords(s);
    printf("%s", s);


    return 0;
}
