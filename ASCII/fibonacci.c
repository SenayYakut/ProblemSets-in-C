/*
Write a program in C to Display Fibonacci Sequence
*/
#include <stdio.h>
//Solution 1 is up to n term
int main(void)
{
    int num, t1 = 0, t2 = 1, nextTerm;
    printf("Enter a term: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++)
    {
        printf("%d", t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

    }
    return 0;

}

//Solution 2 is up to the number n

int main(void)
{
    int num, t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d, %d, ", t1, t2);
    nextNumber = t1 + t2;

    while(nextTerm <= num)
        {
            printf("%d", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
    
    return 0;

}