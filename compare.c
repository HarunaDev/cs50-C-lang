#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number_one = get_int("Pick a random number between 1 & 20 \n");
    int number_two = get_int("Pick a random number between 1 & 20 \n");

    if (number_one < number_two)
    {
        printf("%d is less than %d \n", number_one, number_two);
    }
    else if (number_one > number_two)
    {
        printf("%d is greater than %d \n", number_one, number_two);
    }
    else 
    {
        printf("%d is equals to %d \n", number_one, number_two);
    }
}
