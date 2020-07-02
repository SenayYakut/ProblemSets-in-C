/*
Write a program in C which will calculate the sum of natural numbers up to a given number(inclusive)
*/

#include <stdio.h>

int main(void)
{
   int num;
   int sum = 0;
   printf("Enter a positive number: \n");
   scanf("%d", &num);
   
   for(int i = 0; i <= num; i++)
   {
       sum += i;
   }
    printf("The sum of the natural numbers %.1d\n", sum);

}
