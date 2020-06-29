// Implements a dictionary's functionality

#include <stdbool.h>
#include "dictionary.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
 


#define HASHTABLE_SIZE 1000
 
// Represents number of buckets in a hash table
 
// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;
 
// Represents a hash table
node* hashtable[HASHTABLE_SIZE];

unsigned int num_words = 0;
bool is_loaded_dict = false;
 
// Hashes word to a number between 1 to 26 and returns a valid index in our hashtable
//this hash function is taken from www.stackoverflow.com
unsigned int hash(const char* word)
{
    int hash = 0;
    int n;
    for(int i = 0; word[i] != '\0'; i++)
    {
        if(isalpha(word[i]))
        {
            n = word[i] - 'a' + 1;
            
        }
        else
        {
            n = 27;
        }
        
        hash = ((hash << 3) + n) % HASHTABLE_SIZE;
    }
    return hash;
}
 
// Loads dictionary into memory, returning true if successful else false
bool load(const char* dictionary)
{
    //  o   pens thre dictionary file 
    FILE* infile = fopen(dictionary, "r");
    if (infile == NULL)
    {
        return false;
    }
    
    for(int i = 0; i < HASHTABLE_SIZE; i++)
    {
        hashtable[i] = NULL;
    }
 
    // Buffer for a word, i will into this word
    char word[LENGTH + 1];
    node * new_nodeptr;
 
    // read until the end of the file
    while (fscanf(infile, "%s", word) != EOF)
    {
        num_words++;
        do
        {
            new_nodeptr = malloc(sizeof(node));
            if(new_nodeptr == NULL)
            {
                free(new_nodeptr);
            }
        }while(new_nodeptr == NULL);
        
        strcpy(new_nodeptr -> word, word);
        int index = hash(word);
        if(hashtable[index] == NULL)
        {
            new_nodeptr -> next = NULL;
            hashtable[index] = new_nodeptr;
        }
        else
        {
            new_nodeptr -> next = hashtable[index];
            hashtable[index] = new_nodeptr;
            
        }
        
        
    }
 
    // Close dictionary
    fclose(infile);
    bool is_loaded_dic = true;
 
    // Indicate success
    return true;
}
 
// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    if(!is_loaded_dict)
    
        return 0;
    
    return num_words;
}

bool unload(void)
{
    
    if(!is_loaded_dict)
    {
        return false;
    }
    
    for(int i = 0; i < HASHTABLE_SIZE; i++)
    {
        if(hashtable[i] != NULL)
        {
            node* ptr = hashtable[i];
            while(ptr != NULL)
            {
                node* predptr = ptr;
                ptr = ptr -> next;
                free(predptr);
            }
        }
    }
    return true;
}
 
// Returns true if word is in dictionary else false
bool check(const char* word)
{
    char check_word[strlen(word)];
    strcpy(check_word, word);
    for (int i = 0; check_word[i] != '\0'; i++)
    {
        check_word[i] = tolower(check_word[i]);
    }
    
    int index = hash(check_word);
    if(hashtable[index] != NULL)
    {
        for(node* nodeptr = hashtable[index]; nodeptr != NULL; nodeptr = nodeptr -> next)
        
            if(strcmp(nodeptr -> word, check_word) == 0)
            
                return true;
            
        
    }
    return false;

}
 
// Unloads dictionary from memory, returning true if successful else false

