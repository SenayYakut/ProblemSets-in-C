/*
Write a program in C which takes an arithmetic operator +, -, *, / and two operands from the user. Then, it performs the calculation on the two operands depending upon the operator entered by the user.
*/

#include <stdio.h>

int main(void)
{
double n1, n2;
char operator;
printf("Enter an operator(+, -, *, /): ");
scanf("%c", &operator);
printf("Enter 2 operands: ");
scanf("%lf %lf", &n1, &n2);

switch(operator)
{
    case '*':
    printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
    break;

    case '+':
    printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
    break;

    case '-':
    printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
    break;

    case '/':
    printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
    break;

    default:
    printf("Error!\n");

}
return 0;

}
