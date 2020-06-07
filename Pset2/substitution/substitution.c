/*
Implement a program that implements a substitution cipher, per the below.

$ ./substitution JTREKYAVOGDXPSNCUIZLFBMWHQ
plaintext:  HELLO
ciphertext: VKXXN


Design and implement a program, substitution, that encrypts messages using a substitution cipher.

Implement your program in a file called substitution.c in a directory called `substitution.
Your program must accept a single command-line argument, the key to use for the substitution. The key itself should be case-insensitive, so whether any character in the key is uppercase or lowercase should not affect the behavior of your program.
If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
If the key is invalid (as by not containing 26 characters, containing any character that is not an alphabetic character, or not containing each letter exactly once), your program should print an error message of your choice (with printf) and return from main a value of 1 immediately.
Your program must output plaintext: (without a newline) and then prompt the user for a string of plaintext (using get_string).
Your program must output ciphertext: (without a newline) followed by the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext substituted for the corresponding character in the ciphertext; non-alphabetical characters should be outputted unchanged.
Your program must preserve case: capitalized letters must remain capitalized letters; lowercase letters must remain lowercase letters.
After outputting ciphertext, you should print a newline. Your program should then exit by returning 0 from main.

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
   if(argc != 2 )
   {
       printf("Invalid Key\n");
       return 1;
   }
   
   
   string key = argv[1];
   int len = strlen(key);
   
   if(len != 26)
   {
       printf("Invalid Key\n");
       return 2;
   }
   
    for (int i = 0; i < len; i++) 
    {
        if(!isalpha(key[i]))
        {
            printf("Invalid Key\n");
            return 3;
        }
    }    


   for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (key[i] == key[j]) {
                printf("Invalid key\n");
                return 4;
            }
        }
    }


   string s = get_string("plaintext: "); // get text
   printf("ciphertext: ");
   string ciphertext = "";

   char  al[27] = {"a","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","\0"};

   for (int i = 0; i < 26; i++)
   {
       if(!isalpha(s[i]))
       {
           ciphertext[i] = s[i];
           printf("%c\n", s[i]);
           return 0;
       }
   } 
}

/*
else
        {
       for(int j = 0; j < key.length; j++)
       {
           if(tolower(s[i]) == key[i][j] && s[i] != key[i][j])
           {
               ciphertext[i] = toupper(alphabet[j]);
               printf("%c\n", toupper(alphabet[j]));
           }
           else
           {
               ciphertext[i] = alphabet[j];
               printf("%c\n", alphabet[j]);
           }
        }
    }
    }


*/
