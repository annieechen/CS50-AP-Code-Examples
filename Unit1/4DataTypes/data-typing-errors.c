/**
 * data-typing-errors.c
 * 
 * demonstrates that variables in C are statically typed
 * 
 * NOTE: This program is meant to not compile. 
 * 
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare a character variable, have it hold 'F' (for fail!)
    char letter = 'F';
    // try to set it to an int. What happens?
    letter = 500;
    
    // the compiler error message:
    // error: implicit conversion from 'int' to 'char' changes value from 500 to -12 [-Werror,-Wconstant-conversion]
    // shows that you cannot put an int value into a variable that has only allocated enough memory for a char
    // later, this example can be used to show overflow, but for now, simply illustrate that a variable can switch types
}