#include <stdio.h>
// using while loop to repeat task.

int main(void)
{
    int counter = 3;

    while (counter > 0)
    {
        printf("meow \n");
        counter--;
    }

    
// using the for loop to carry out the same task
    for (int i = 0; i < 3; i++)
    {
        printf("Meow \n");
    }
}

// what does it mean to loop or repeat something three times - it basically means to do one task, then count down and do another task till you exit the loop or run out of counts.

// just like conditionals loops use boolean expressions to make decisions on how to carry out functions