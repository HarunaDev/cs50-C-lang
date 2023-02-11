#include <cs50.h>
#include <stdio.h>

// mario game in c

int main(void)
{
    // get size of grid
    
    // get size
    int get_size(void);
    int size = get_size();

    // print grid 
    void print_grid(int size);
    print_grid(size);
}


// get size function
int get_size(void)
{
    int size;
    do 
    {
        size = get_int("Size: ");
    }
    while (size < 1);
}

// print grid function
void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) 
        {
            printf("#");
        }
        printf("\n");
    }    
}