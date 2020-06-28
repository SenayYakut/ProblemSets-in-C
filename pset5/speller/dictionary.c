// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 1;

// Hash table
node *table[N];


// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int hash = 0;
    int n;
    for (int i = 0; word[i] != '\0'; i++) {
        // alphabet case
        if (isalpha(word[i]))
            n = word[i] - 'a' + 1;
        else  // comma case
            n = 27;

        hash = ((hash << 3) + n) % SIZE;
    }
    return hash;

}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    //Allocate some memory for extra buckets
    node *n = malloc(sizeof(node));

    //Open dictionary file
    FILE *fptr;
    fptr = fopen("dictionary","r");
    if(fptr == NULL)
    {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       return 1;
    }
    while((fscanf(fptr, "%s", word)) != EOF)
    {
        node *new_node = malloc(sizeof(node));
        if(new_node == NULL)
        {
            return 1;
            fclose(fptr);
        }

        strcpy(new_node->word, word);
        new_node->next = NULL;
        
       unsigned int index = hash(new_node -> word);
       if(table[index] == NULL)
       {
           table[index] = new_node;
       }
        
        
        fclose(fptr);
        return 0;
    //Read strings from file one at a time
    //Create a new node for each word
    //Hash word to obtain a hash value
    //Insert node into hash table at that location

    
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
