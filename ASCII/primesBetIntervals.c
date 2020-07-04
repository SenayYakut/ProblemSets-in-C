/*
Write a program in C which will display prime numbers between two intervals
*/

#include <stdio.h>

int main(void)
{
    int low, high;
    printf("Enter an interval: ");
    scanf("%d %d", &low, &high);

while(low <= high)
{
    if(low % 2 != 0 && low % 3 != 0)
    {
        printf("%d is a prime number\n", low);
    }
    low++;
}
return 0;

}