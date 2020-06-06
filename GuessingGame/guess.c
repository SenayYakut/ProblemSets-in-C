/*
IMPLEMENT A GUESSING GAME:

1. Specifically, you will need to use the if-else conditional statements, a 'for' loop, take user input and use the rand() function to generate random integers.

2. Also, you will have to use a variable that checks if the player answered the question correctly or not.

3. Additionally, look up the 'break' command to exit a 'for' loop in case the player guesses the number correctly before 10 tries.

YOU ALSO NEED TO HELP THE PLAYER TO GUESS THE NUMBER:

Here's what you should implement additionally. Print one of the following statements after every input:

1. If the number the player guessed is at a distance of 30 or more from the required number, print "Too far away"

2. If the number the player guessed is at a distance between 20 to 30 from the required number, print "Getting closer"

3.  If the number the player guessed is at a distance between 10 to 20 from the required number, print "Quite close"

4. If the number the player guessed is at a distance less than or equal to 10 from the required number, print "Very close"



The distance is the absolute value of (guessed number - actual number). Look up how to take absolute value. It is done by using the abs() function which is also present inside stdlib.h

*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int guess, n, m;
 n = 10;
 m = rand() % 100;

   for(int i = 0; i<n; i++)
   {
    printf("Enter a number:");
    scanf("%i", &guess);
    int distance = abs(guess-m);
    
    if(guess == m){
     break;
    }
    else if(distance>30)
    {
     printf("Too far away\n");
    }
    else if(distance < 30 && distance > 20)
    {
     printf("Getting closer\n");
    }
    else if(distance > 10 && distance < 20)
    {
     printf("Quite close\n");
    }
    else if(distance <= 10)
    {
     printf("Very close\n");
    }
  
   }
   printf("Congrats! You guessed the right number\n");
   
}
