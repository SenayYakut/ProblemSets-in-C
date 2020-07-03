/*
Write a program in C which will find the greatest common divisor 
*/

#include <stdio.h>

int main(void)
{
    int i, n1, n2, gcd;

    printf("Enter 2 integer numbers: ");
    scanf("%d %d", &n1, &n2);

    for(i = 1; i <= n1 && i <= n2; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("Greatest common divisor for %d and %d is %d ", n1, n2, gcd);
    return 0;
}