/*
Write a program in C to chech if the number whether prime or not
*/

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    

    if(num > 2)
    {
    if(num % 2 != 0 && num % 3 != 0)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number \n", num);
    }
    }
    else if (num < 2)
    {
        printf("1 is not a prime number\n");
    }
    else
    {
        printf("%d is a prime number \n", num);
    }
    return 0;
    
}