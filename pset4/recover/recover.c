#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


#define BLOCKSIZE 512
typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    // Accepting exactly one command-line argument 
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    // Open memory card
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        return 1;
    }

    // Close file
    //unsigned char bytes[4];
    
    int *bytes = malloc(128 * sizeof(int));
    fread(bytes, 512, 1, file);
    
 
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff && (bytes[3] & 0xf0) == 0xe0)
    {
        sprintf("bytes", "%03i.jpg", 2);
        FILE *img = fopen("bytes", "w");
        
    }
    
    

    //Untill when you should repeat
    
    fclose(file);
}