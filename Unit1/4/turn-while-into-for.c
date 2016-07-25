/**
 * turn-while-into-for.c
 * 
 * demonstrates the for loop equivalent of a simple while loop
 * 
 * students should discuss the pros and cons of for and while loops
 * how should they decide which to use in which situation?
 * this is a continuation of make-a-loop.c
 */    
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    // remember the code below from make-a-loop.c?
    // this was the while loop we ended up with
    printf("First, let's loop with a while loop!\n\n");
    int counter = 0;
    while(counter < 5)
    {
        printf("%i meow\n", counter);
        counter = counter + 1;
    }
    
    // there's another loop structure, called a for loop
    // for loops were made to address a common pattern in programming
    
    // you'll notice in the example above we did 3 things
    // 1. we initialized a counter variable to a certain value by setting int counter = 0
    // 2. we checked that that variable was less than a certain value and told the computer to continue looping while it's true
    // 3. we incremented (increased) counter  (our variable) by a certain amount
    
    // to make this pattern easier to write, we have a for loop!
    
    printf("\nNow, let's use a for loop!\n\n");
    
    // in this loop structure, all 3 things we did above fit into one line
    // each individual part is separated by a semicolon
    // the first statement is the initialization of the counter variable to a value
    // (we called it count in the second time so we wouldn't get a compiler warning)
    // the second statement is the condition
    // as long as the condition stays true, the loop keeps repeating
    // the third statement is the incrementing
    // every time the statements inside the loop run, count is increased by 1
    for(int count = 0; count < 5; count = count +1)
    {
        // now, within the loop, we can put the same statement from before
        printf("%i meow\n", count);
        // but now, we don't have to increment counter within the loop
        // it was taken care of at the top!
    }
    
}