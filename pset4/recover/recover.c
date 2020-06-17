#include <stdio.h>
#include <string.h>
// #include <cs50.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint8_t BYTE;
#define BLOCK_SIZE 512
#define FILE_NAME_SIZE 8
bool is_start_new_jpeg(BYTE buffer[]);

int main(int argc, char *argv[])
{
    // Make sure Accepting one  command-line argument 
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }
    // Open memory card
    FILE *infile = fopen(argv[1], "r");
    //make sure it isnt empthy
    if (infile == NULL)
    {
        printf("File is not found\n");
        return 1;
    }
//define a buffer
    BYTE buffer[BLOCK_SIZE];
    int file_index = 0;
    bool have_found_first_jpg = false;
    FILE *outfile;//define a file pointer outfile
    //read from card.raw to buffer
    while (fread(buffer, BLOCK_SIZE, 1, infile))
    {
        if (is_start_new_jpeg(buffer))
        {
            if (!have_found_first_jpg)
            {
                have_found_first_jpg = true;
            }
            else
            {
                fclose(outfile);
            }
            
               
            char filename[FILE_NAME_SIZE];
            sprintf(filename, "%03i.jpg", file_index++);
            outfile = fopen(filename, "w");
            if (outfile == NULL)
            {
                return 1;
            }
            fwrite(buffer, BLOCK_SIZE, 1, outfile);
        }
        else if (have_found_first_jpg)
        {
            //
            fwrite(buffer, BLOCK_SIZE, 1, outfile);

        }
    }
    
    fclose(outfile);
    fclose(infile);
}    
bool is_start_new_jpeg(BYTE buffer[])    
{ 
    return buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0;
}      