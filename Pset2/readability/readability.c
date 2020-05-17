/*
Readability
Implement a program that computes the approximate grade level needed to comprehend some text, per the below.

$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
*/
<<<<<<< HEAD
//Much Improved Solution
=======

>>>>>>> 38b400e56e0f92f81cc5ede648ff7b1350025e1b
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
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
       if (isalpha(s[i]))
       {
           letter_count++;
<<<<<<< HEAD
       }
       else if (s[i] == ' ')
       {
           word_count++;
       }
=======
       }
       else if (s[i] == ' ')
       {
           word_count++;
       }
>>>>>>> 38b400e56e0f92f81cc5ede648ff7b1350025e1b
       else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
       {
           sentence_count++;
       }
    }
//    printf("letters: %i; words: %i; sentences: %i\n", letterscount, wordcount, sentencecount);

    float index = 0.0588 * (100 * (float) letter_count / (float) word_count) - 0.296 * 
                  (100 * (float) sentence_count / (float) word_count) - 15.8;
                  
    if (index < 0)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }

<<<<<<< HEAD
}
=======
}

>>>>>>> 38b400e56e0f92f81cc5ede648ff7b1350025e1b
