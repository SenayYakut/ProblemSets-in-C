/*
Write a program which will count the number of digits of the given number
*/

#include <stdio.h>

int main(void)
{
    long long num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num != 0)
    {
        num /= 10;
        count++;
    }
    printf("%d\n", count);
    return 0;
}