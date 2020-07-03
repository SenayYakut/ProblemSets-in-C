/*
write a program which will print factorial a number
*/

#include <stdio.h>

//Solution 1, This isnot recursive solution

int main(void)
{
    int n;
    int fact = 1;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);

    if(n < 0)
    {
        return 1;
    }

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}