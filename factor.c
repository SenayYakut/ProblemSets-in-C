/*
Write a program in C which will print the factors of a positive integer
*/

#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    
    
    for(i = 1; i <= num; i++)
    {
    if(num % i == 0)
    {
        printf("%d,", i);
    }
    }
    return 0;
}