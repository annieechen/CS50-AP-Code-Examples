/**
 * basic-bools.c
 * 
 * demonstrates various boolean statements and prints how they evaluate
 */    
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // let's see how these statements evaluate!
    printf("28 == 27: ");
    if (28 == 27)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    // here we are not comparing variables, but rather the characters 'a' and 'b'
    printf("a == b: ");
    if ('a' == 'b')
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    printf("0 == 0: ");
    if (0 == 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    // we can also compare variables
    // let's ask for the user to give us a number, which we can store in a variable
    printf("Please give me a number! ");
    int number = GetInt();
    
    printf("Your number is greater than 0: ");
    if(number > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    // we can also store boolean values in a variable of type bool
    bool csRocks = true;
    
    // and use them as a condition
    if(csRocks)
    {
        // this will print, because the condition is true
        printf("Computer Science Rocks!\n");
    }
}