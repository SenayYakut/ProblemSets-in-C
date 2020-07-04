/*
    Write a program in C which will calculate the power of a number
*/

#include <stdio.h>

int main()
{
    int num, exp;
    long long result = 1;
    
    printf("Enter a base number: ");
    scanf("%d", &num);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    

    while(exp != 0)
    {
        result *= num;
        exp--;
    }
    printf("Answer is %lld\n", result);
    return 0;
}
