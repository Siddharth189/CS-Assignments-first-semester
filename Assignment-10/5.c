///5. Write a program in C to check if a string is a palindrome or not. The string is user input.
#include<stdio.h>
#include<string.h>

int checkpalindrome(char *s, int n)
{
    int count;
    for(int i = 0; i < n; i++)
    {
        count = 0;
        for(int j = n-1; j >= i; j--)
        {
            if(s[i] == s[j])
            {
                count++;
            }
        }
        if(n % 2 == 0)
        {
            if (count == n / 2)
                return 1;
        }
        else if(n % 2 != 0)
        {
            if (count == (n - 1) / 2)
                return 1;
        }

    }
return 0;
}


int main()
{
    char string[10];
    printf("Enter the string: ");
    scanf("%s", &string);
    int length = strlen(string);

    int k = checkpalindrome(string, length);

    if(k==1)   printf("The string %s is palindrome\n", string);
    if(k==0)   printf("The string %s is not palindrome\n", string);


    return 0;
}
