// conditionals - how to use conditionals to make decisions in c

// include libraries
#include <cs50.h>
#include <stdio.h>

// using conditionals to make decisions
int main(void) {
    int x = 4;
    int y = 3;
     if (x < y)
     {
        printf("x is less than y \n");
     }
     else if (x > y)
     {
        printf("x is greater than y \n");
     }
     else 
     {
        printf("x is equals to y \n")
     }
}