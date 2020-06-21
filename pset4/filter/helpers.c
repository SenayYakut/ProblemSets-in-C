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
    //Define a temp storage for swap function
    RGBTRIPLE temp;

    //Iterate through all the rows of the image
    for(int i = 0; i < height; i++)
    {
        //Iterate through the half of the width which is the half of the columns
        for(int j = 0; j < width/2; j++)
        {
            //swap function for swapping the pixels of the image
            temp = image[i][j];
            image[i][j] = image[i][width-j-1];// we have to subs j cause we have to find the reflection of the pixel on horizontally
            image[i][width-j-1] = temp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    int sumBlue;
    int sumGreen;
    int sumRed;
    float counter;
    //create a temporary table of colors to not alter the calculations
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            sumBlue = 0;
            sumGreen = 0;
            sumRed = 0;
            counter = 0.00;

            // sums values of the pixel and 8 neighboring ones, skips iteration if it goes outside the pic
            for (int k = -1; k < 2; k++)
            {
                if (j + k < 0 || j + k > height - 1)
                {
                    continue;
                }

                for (int h = -1; h < 2; h++)
                {
                    if (i + h < 0 || i + h > width - 1)
                    {
                        continue;
                    }

                    sumBlue += image[j + k][i + h].rgbtBlue;
                    sumGreen += image[j + k][i + h].rgbtGreen;
                    sumRed += image[j + k][i + h].rgbtRed;
                    counter++;
                }
            }

            // averages the sum to make picture look blurrier
            temp[j][i].rgbtBlue = round(sumBlue / counter);
            temp[j][i].rgbtGreen = round(sumGreen / counter);
            temp[j][i].rgbtRed = round(sumRed / counter);
        }
    }

    //copies values from temporary table
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            image[j][i].rgbtBlue = temp[j][i].rgbtBlue;
            image[j][i].rgbtGreen = temp[j][i].rgbtGreen;
            image[j][i].rgbtRed = temp[j][i].rgbtRed;
        }
    }
}
}
