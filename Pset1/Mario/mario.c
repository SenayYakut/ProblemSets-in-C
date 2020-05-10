#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int n;
    do
    {
        n = get_int("Heigth: ");
    }
    while (n < 1 || n > 8);
    for (int i = 1; i<=n; i++)
    {  
        for(int k = n-1; k>=i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}