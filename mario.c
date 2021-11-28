/* Code to generated blocks based on height and width */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // initialize variables
    int j;
    int k;
  
  // get width and height
    do
    {
        j = get_int("Width: ");
        k = get_int("Height: ");
    }

 // check if the initialize variables are of positive value
    while (j < 1 && k < 1);
    
 /*  initialize variables (a, i) to 0 and checks if the variable is less than the previously initialized variables (k, j) which
     must be of positive value. Then increments and prints.
     
 */
    for (int a = 0; a < k; a++) 
    {
        for (int i = 0; i < j; i++)
        {
            printf("#");
        }
        printf("\n");    
    }    
}
