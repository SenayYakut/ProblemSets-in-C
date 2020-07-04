/*
Write a program in C to check if it is Armstrong Number
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, originalN;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalN = num;
    
    while(num != 0)
    {
        sum += pow(num % 10, 3);
        num /= 10;
    }
    if(sum == originalN)
    {
        printf("%d is an armstrong number \n", originalN);
    }
    else
    {
        printf("%d is not  an armstrong number\n", originalN);
    }
    return 0;
}