/**
 * updating-variables.c
 * 
 * demonstrates how variables can be updated
 * 
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompts user for a number
    printf("What should x be? ");
    int x = GetInt();
    
    // display the value of x
    printf("x is: %d\n", x);
    
    // update x
    printf("What should we change x to? ");
    
    // note, we do not declare int x again, but instead change the value of x
    // which is already created, to the new value provided by the user 
    x = GetInt();
    
    // display updated x
    printf("x is now: %d\n", x);
}