/**
 * make-a-loop.c
 * 
 * demonstrates a potential thought process behind constructing a loop.
 * NOTE: this is simply one way of thinking about it. 
 * 
 * Can be used as a handout. Have students predict what the output of this code will be
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // first, let's try meowing 5 times in a terribly inefficient way
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
    
    // the above lines of code were simply copy pasted in, 
    // and the number within each printf changed by hand. This seems horribly inefficient!
    
    // how can we make this more efficient?
    // luckily, C has a control flow structure called a loop 
    // we can use it to reduce repetitive code
    
    printf("\nLet's loop this!\n\n");
    
    // let's consider 2 key questions
    // 1. What do I want to repeat?
    // 2. How long should we repeat it?
    
    // the answers to the above situation
    // 1. I want to repeat printf("meow\n");
    // 2. I want to repeat it 5 times
    
    // how can I get the computer to repeat the statement 5 times?
    // I can set a condition in my while loop so that the program knows when to stop looping
    
    // here I declare a counter, and set it to 0, to indicate that the loop has run 0 times
    int counter = 0;
    
    // now, I know that I want my condition to be
    while (counter < 5) 
    // because I want the loop to run while it has run less than 5 times
    // in other words, I want it to stop only when `counter < 5` is no longer true
    {
        // inside the loop, I put the answer to question 1.
        // what do I want to repeat?
        printf("meow\n");
        
        // now, how do I count that the statement has been printed once?
        // I can increment the counter!
        counter = counter + 1;
        
        // it's important to make sure that the condition inside the parentheses 
        // which in this case is counter < 5
        // becomes false at some point, otherwise, you'll have an infinite loop
        // which will probably crash your computer :(
    }
    
    // whew, we succeeded at printing meow without having to copy paste the statement 5 times!
    // now, let's introduce a 3rd key question in making a loop!
    // 3. What do I want to change each time the loop is run?
    
    // let's take the same loop code from before, but this time, count each meow!
    printf("\nAgain without a loop...\n\n");
    
    // first, let's do it the inefficient way
    printf("0 meow\n");
    printf("1 meow\n");
    printf("2 meow\n");
    printf("3 meow\n");
    printf("4 meow\n");
    
    // how can we use a loop to do this?
    
    // let's use the same counter variable from before, but inside the statement this time!
    // first, we'll reset it to 0
    counter = 0;
    
    // Remember, the answer to our questions are as follows
    // 1. I want to repeat "<number> meow"
    // 2. I want to repeat it 5 times
    // 3. Each time, I want the number to go up by one.
    
     printf("\nNow with a loop!\n\n");
     
    // predict what the below code will print!
    while(counter < 5)
    {
        printf("%i meow\n", counter);
        counter = counter + 1;
    }
    
}