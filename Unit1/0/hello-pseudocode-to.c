/**
 * hello-psuedocode-to.c
 *
 *
 * Says hello to whomever
 *
 * Demonstrates turning psuedocode to c code
 */
       
// pseudocode first

// prompt user for their name
// take name as input
// say hello to user

// then, translate to C code, with the psuedocode left in as comments

       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for their name
    printf("State your name: ");
    // take name as input
    string name = GetString();
    // then, translate to C code, with the psuedocode left in as comments
    printf("hello, %s\n", name);
}