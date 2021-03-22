///4. Write a program in C to calculate the number of vowels in a string. The string is user input.
#include<stdio.h>


int main()
{
    int count = 0;
    char str1[10] = "HEloO";

    printf("All the vowels in the string are: \n");
    for(int i=0; str1[i]; i++)
    {
        if ((str1[i]=='a')||(str1[i]=='e')||(str1[i]=='i')||(str1[i]=='o')||(str1[i]=='u')||(str1[i]=='A')||(str1[i]=='E')||(str1[i]=='I')||(str1[i]=='O')||(str1[i]=='U'))
        {
            count++;
            printf("%c\n", str1[i]);
        }
    }

    printf("Number of vowels in the string is: %d\n", count);



return 0;
}
