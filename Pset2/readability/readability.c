/*
Readability
Implement a program that computes the approximate grade level needed to comprehend some text, per the below.

$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
*/
//Much Improved Solution
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text: ");
    int letter_count = 0;
    int word_count = 1;
    int sentence_count = 0;

//count words
    for (int i = 0; i < strlen(s); i++)
    {
       if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
       {
           letter_count++;
       }
       else if (s[i] == ' ')
       {
           word_count++;
       }
       else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
       {
           sentence_count++;
       }
    }
//    printf("letters: %i; words: %i; sentences: %i\n", letterscount, wordcount, sentencecount);

    float grade = 0.0588 * (100 * (float) letter_count / (float) word_count) - 0.296 *
                 (100 * (float) sentence_count / (float) word_count) - 15.8;
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

}