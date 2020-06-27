/*
Write a program in C which will read some info from a text file and will print it
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    //Open the file in reading mode 
    fptr = fopen("program.txt", "r");
    //see if the file is opened succesfully
    if(fptr == NULL)
    {
        printf("Error!");
        return 1;
    }
    //will read the num from the file which fptr points and stores in &num location
    fscanf(fptr, "%d", &num);
    //will print the info to user
    printf("The value of num is %d", num);
    fclose(fptr);

    return 0;

}