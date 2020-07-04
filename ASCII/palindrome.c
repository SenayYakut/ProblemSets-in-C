/*
Write a program which will check whether a number is palindrome or not
*/

#include <stdio.h>

int main()
{
    int num, revN = 0, remainder, originalN;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalN = num;

    while(num != 0)
    {
        remainder = num % 10;
        revN = revN * 10 + remainder;
        num /= 10;
    }
    if(originalN == revN)
    {
        printf("%d is a palindrome\n", originalN);
    }
    else
    {
        printf("%d is not a palindrome \n", originalN);
    }
    return 0;
    
}