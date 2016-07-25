/**
 * while-to-do-while.c
 * 
 * demonstrates that although a while loop can accomplish the same input verification,
 * a do while loop is more elegant
 * 
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // let's say we want the user to give us a number
    // but we're really picky and we want the number to be 28
    
    // with just a while loop, we'd have to do by first initializing our variable to a value that is not 28
    int chosenNumber = -1;
    // and while the number is not 28, keep prompting the user for an integer
    while (chosenNumber != 28)
    {
        printf("Please type in 28\n");
        chosenNumber = GetInt();
    }
    // now, we know that the number must be 28, because we exited our loop
    printf("Our chosen number is %i\n", chosenNumber);
    
    
    // but having to initalize chosenNumber to a random number (as long as it's not 28)
    // isn't very good design
    
    // a do-while loop is good for this situation 
    printf("\nNow, let's do the same thing with a do-while loop\n\n");
    
    // because it always executes the code within the braces once before it checks the conditions
    do 
    {
        printf("Please type in 28\n");
        chosenNumber = GetInt();
    } 
    while (chosenNumber != 28);
    
    // you'll notice that we didn't have to set chosenNumber to a value this time
    // because we'll always GetInt() and store the value in chosenNumber at least once
}