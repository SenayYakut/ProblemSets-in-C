/*
Write a program which will take a string as an input and will output the uppercase of the given string
*/

# include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//Solution 1
int main(void)
{
    string s = get_string("Input:");
    printf("Output:");
    int i;
    int n=strlen(s);
    for(i=0; i<n; i++)
    {
        if(s[i] >= "a" && s[i] <= "z")
        {
            printf("%c", s[i]-32);
        }
    }
    printf("\n");
}

//Solution 2

int main(void)
{
    string s = get_string("Input:");
    printf("Output: ");
    int i;
    int n = strlen(s);
    for(i=0; i<n; i++)
    {
        printf("%c", s[i].toupper);
    }
    printf("\n");
}



