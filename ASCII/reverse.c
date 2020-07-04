/*
Write a program in C which will reverse a given number by the user
*/

#include <stdio.h>

int main(void)
{
    int num, rev = 0,remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    printf("%d", rev);
    return 0;
}