/*

Exercise was to print a pyramid similar to the one below based on a specified height.
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    
// get height
    
    {
        height = get_int("Height: ");
    }

    // condition to check if height is more than 8 and less than 1
    while (height > 8 || 1 > height);


    for (int i = 0; i < height; i++)
    {

        for (int k = i; k < height - 1; k++)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("  ");


        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        printf("\n");
    }
}
