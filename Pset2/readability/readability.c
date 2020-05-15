/*
Readability
Implement a program that computes the approximate grade level needed to comprehend some text, per the below.

$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
*/
#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    string text = get_string("Give me a paragraph:");
    printf("%s\n", text);
}

