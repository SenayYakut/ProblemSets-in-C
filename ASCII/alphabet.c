/* Write a program will check whether a character is an alphabet or not*/

#include <stdio.h>
#include <ctype.h>


int main(void)
{
    /*
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
    //The ASCII value of the lowercase alphabet is from 97 to 122. And, the ASCII value of the uppercase alphabet is from 65 to 90.
    if((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    {
         printf("%c is an alphabet\n", c);
    }
    else
    {
        printf("%c is not alphabet \n", c);
        
    }
    */
    
    char c;
    
    printf("Enter a character\n");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is alphabet\n", c);
    }
    else
    {
        printf("%c is not alphabet\n", c);
    }
    

}