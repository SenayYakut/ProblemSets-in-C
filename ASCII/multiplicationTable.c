/*
    Write a program in C which will generate Multiplication Table
*/

#include <stdio.h>

int main(void)
{
    int n, multip;
    printf("Enter a positive number \n");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
    {
        multip =n * i;
        printf("%d * %d = %d\n", n, i, multip);
    }
    return 0;
}