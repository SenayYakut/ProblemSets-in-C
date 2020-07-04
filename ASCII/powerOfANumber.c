/*
    Write a program in C which will calculate the power of a number
*/

#include <stdio.h>
#include <math.h>

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
//Solution 2 is using built in pow function which is declared in math.h standard library

#include <stdio.h>
#include <math.h>
int main(void)
{
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent number: ");
    scanf("%lf", &exp);

    result = pow(base, exp);
    printf("%.1lf ^ %.1lf is %.2lf", base, exp, result);
    return 0;
}