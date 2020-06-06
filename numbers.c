
/*
Write a program that checks if a number is odd or even.

The code should also do the following:

1. Take user input of the number you want to analyse

2. We assume that the user always enters an integer

3. Hint: Here we use the modulo operator

4. Make sure you comment and indent your code. Also, make sure you declare all your variables at once place.
*/
#include <stdio.h>

int main() 
{

 int num;
 printf("Enter a number: ");
 scanf("%i", &num);


if(num % 2 != 0)
{
    printf("Odd\n");
}
else
{
    printf("Even\n");
}

return 0;
}