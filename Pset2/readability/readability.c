/*
Readability
Implement a program that computes the approximate grade level needed to comprehend some text, per the below.

$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
*/



#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Solution 1
int main()
{
    string text = get_string("Give me a paragraph:");
    printf("Text: %s\n", text);
    
 int alp, i;
 alp = i = 0;
 
    while(text[i]!='\0')
      {
        if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z'))
        {
            alp++;
        }
        i++;
      }
    printf("Letter(s) %d\n", alp);
  
 
 int count = 0;
 
    for (i = 0; text[i] != '\0';i++)
    {
        if (text[i] == ' ' &&  text[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
    
 int sentence=0;
 
    for (i = 0; text[i] != '\0';i++)
      {
        if((text[i]=='.') || (text[i]=='!') || (text[i]=='?'))
          {
            sentence++;
          }
       }
    printf("Sentence(s) %d\n", sentence);
    
    float index = (0.0588 * ((alp*100)/count+1)) - (0.296 * ((sentence * 100)/count+1)) -15.8;
    index=round(index);
        if(index>=16)
            {
              printf("Grade 16 + \n");
            }
        else if(index<1)
            {
               printf("Before Grade 1 \n");
            }
        else 
            {
            printf("Grade %.0f\n", index);
            }
} 
//Solution 2 is more improved           
