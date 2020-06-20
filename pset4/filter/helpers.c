#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            //Store all the current values in the variables
            int blue = image[i][j].rgbtBlue;
            int green = image[i][j].rgbtGreen;
            int red = image[i][j].rgbtRed;
        
    
            //find the average value
            int average = round((red+green+blue)/3.0);
             //set the current values of all pxels to the average
            image[i][j].rgbtBlue = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtRed = average;

        }
    }

}



// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    //Iterate through the height of image in order to get 2 dimentional shape
    for(int i = 0; i < height; i++)
    {
        //iterate through the width of the image in order to get 2 dimentional pixels of image and manupilate them
        for(int j = 0; j < width; j++)
        {
            //get the original colors of the image and store them in the int variables
            int originalRed = image[i][j].rgbtRed;
            int originalGreen = image[i][j].rgbtGreen;
            int originalBlue = image[i][j].rgbtBlue;
            
            //calculate the sepia values
            int sepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);
            //verfy if the sepia values are less then 255 otherwise set the new values to the max which is 255
            image[i][j].rgbtRed = sepiaRed < 255 ? sepiaRed: 255;
            image[i][j].rgbtBlue = sepiaBlue < 255 ? sepiaBlue: 255;
            image[i][j].rgbtGreen = sepiaGreen < 255 ? sepiaGreen: 255;
        }
    
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
