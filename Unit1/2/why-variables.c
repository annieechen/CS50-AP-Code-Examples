/**
 *why-variables.c
 * 
 * demonstrates how variables allow you to reuse values
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompts user for name
    printf("State your name: ");
    
    // prints the results of GetString directly without storing the value 
    printf("hello, %s\n", GetString());
    
    // now, let's store the value GetString() gives us so it can be reused
    printf("State your name (again, so we can store it this time!): ");
    string name = GetString();
    
    // use name in two different places 
    printf("hello again, %s\n", name);
    printf("I remember you, %s\n", name);
}