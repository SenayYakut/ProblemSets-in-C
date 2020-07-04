/*
Write a program in C to find lowest common of two numbers
*/

#include <stdio.h>

int main(void)
{
    int n1, n2, min;
    printf("Enter 2 positive numbers: ");
    scanf("%d %d", &n1, &n2);
    min = (n1 > n2)? n1 : n2;

    while(1)
    {
    if(min % n1 == 0 && min % n2 ==0)
    {
        printf("Lowest common multiple for %d and %d is %d ", n1, n2, min);
        break;
    }
    min++;
    }
    return 0;
}

//Formula for lcm = (n1 * n2) / gcd;