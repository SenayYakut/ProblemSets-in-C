/*
Write a programm which will collect all of the scores from the user and will return an average score
*/
//First prompt the user for number of scores they have
//Second get all of the scores and store them in an array

#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);
int main(void)
{
    int n = get_int("Scores: ");
    
    for(int i =0; i<n; i++)
    {
        int scores[i]=get_int("Scores: %i\n", i+1);
    }
    printf("Average: %.1f\n", average(n, scores));
}

float average(int length, int array[])
{
    int sum=0;
    for(int i =0; i<length; i++)
    {
        sum+=array[i];
    }
    return (float) sum/ (float) length;
}