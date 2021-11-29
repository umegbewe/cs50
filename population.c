/* Program to determine how long it takes for a population to reach a particular size if population/3 are gained and population/4 are lost*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;

    do
    {
        // Prompt for start size
        start = get_int("Start size: ");

    }

    while (start < 9);

    int end;    
    do
    {
        // Prompt for end size
        end = get_int("End size: ");
    }

    while (end < start);

    // Calculate number of years until we reach threshold
    int years = 0;
    
    while(start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }

    // Print number of years
    
    printf("Years: %i\n", years);
}
