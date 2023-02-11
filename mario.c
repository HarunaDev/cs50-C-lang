#include <cs50.h>
#include <stdio.h>

// mario game in c

int main(void)
{
    // get size of grid
    int size;
    // using do while loop to check user input is greater than 1
    do 
    {
        size = get_int("Size: ");
    }
    while (size < 1);
    // loop to print required size onto the console
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) 
        {
            printf("#");
        }
        printf("\n");
    }    
}