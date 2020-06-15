#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
    // Check user typed at least 2 words 
    if (argc != 2)
    {
        return 1;
    }

    // Open file
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        return 1;
    }

    // Close file
    unsigned char bytes[3];
    fread(bytes, 3, 1, file);
    
    if(bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("Different\n");
    }
}