/*7. Write a program in C to word-wise reverse a string. The string is user input. For instance for input string
This is an example.
the output should be
example. an is This
*/
#include <stdio.h>
#include <string.h>


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
    char* word_begin = s;

    char* temp = s;

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    reverse(s, temp - 1);
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
