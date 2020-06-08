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

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //checking the key from line 10 to line 53
    //checking if the user gave 2 arguments or not
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    //26 character or not
    if (strlen(argv[1]) != 26)
    {
        printf("key must contain 26 characters.\n");
        return 1;
    }
    //checking if it's all alphabet or not
    int argvlen = strlen(argv[1]);
    for (int i = 0; i < argvlen; i++)
    {
        if (isalpha(argv[1][i]) == false)
        {
            printf("key must only contain alphabetic characters.\n");
            return 1;
        }
    }
    //initializing 2 dimensional array to use it in the key check and incipher the text
    //i don't know if it's unnecessary step or not tbh please let me know
    char alphabet[2][26];
    for (int i = 0; i < argvlen; i++)
    {
        alphabet[0][i] = 'A' + i;
        alphabet[1][i] = argv[1][i];
    }
    //checking for repeated items inside the key 2 or more of the same letter
    for (int i = 0; i < argvlen; i++)
    {
        int j = 0;
        for (int k = 0; k < argvlen; k++)
        {
            if (toupper(alphabet[1][k]) == toupper(alphabet[1][i]))
            {
                j++;
                if (j == 2)
                {
                    printf("repeated value, check the key\n");
                    return 1;
                }
            }
        }
    }
    //finally made it to the algorithm; please recommend something better
    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, j = strlen(plaintext); i < j; i++)
    {
        if (isalpha(plaintext[i]))
        {  
            if (islower(plaintext[i]))
            {
                for (int k = 0; k < argvlen; k++)
                {
                    if (tolower(alphabet[0][k]) == plaintext[i])
                    {   
                        printf("%c", tolower(alphabet[1][k]));
                    }
                }
            }
            if (isupper(plaintext[i]))
            {
                for (int k = 0; k < argvlen; k++)
                {
                    if (toupper(alphabet[0][k]) == plaintext[i])
                    {   
                        printf("%c", toupper(alphabet[1][k]));
                    }
                }
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
