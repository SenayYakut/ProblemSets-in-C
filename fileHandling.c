/*
Write a program which will take some number input from user and store it into a file using standard I\O functions through C program
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    // this will create a new file in a secure memory location if the file exists than it will over write it
    fptr=fopen("someNumbers.txt", "w");
    //will do the error chech since C program is so low level
    if(fptr == NULL)
    {
        printf("Error!");
        return 1;
    }
    //will get some in put from user and store it &num location
    printf("Enter some numbers: ");
    scanf("%d", &num);

    //will write the input someNumbers.text file
    fprintf(fptr, "%d", num);
    //will close the file i just created.
    fclose(fptr);
    return 0;

}
