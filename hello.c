// Intro to C lang

// print hello world in c

// correctness, design and style are the main goals a programmer must seek when writing code.

// include libraries for program
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What is your first name? ");
    string last = get_string("What is your last name? ");
    string course = get_string("What course are you taking? ");
    string percentage = get_string("What's the percentage of the course that has been completed? ");

    printf("Hello, cs50! \nMy name is %s %s! \nI love the havard%s course so much \nI have completed about %s%% of the course.")
}
