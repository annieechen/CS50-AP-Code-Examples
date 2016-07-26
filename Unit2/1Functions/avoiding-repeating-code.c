/**
 * avoiding-repeating-code.c
 * 
 * shows how a function can group together blocks of code that will need to be repeated
 * 
 */
 
 
#include <stdio.h>
#include <cs50.h>
// prototypes
void greet(string name);

int main(void)
{
    // say that I want to say "hello" and "how are you" to three people
    // and so will need to print both statements three times
    // I could do it like so
    string name1 = "David";
    printf("hello, %s\n", name1);
    printf("how are you doing, %s?\n", name1);
    
    string name2 = "Zamyla";
    printf("hello, %s\n", name2);
    printf("how are you doing, %s?\n", name2);
    
    string name3 = "Maria";
    printf("hello, %s\n", name3);
    printf("how are you doing, %s?\n", name3);
    
    // but this seems like an awful lot of repeated code
    // Plus, what if I wanted to change my greeting from "how are you doing" to "what's up"
    // I'd have to go change three separate lines of code!
    // instead, we can group common code into a function, and then call it like so
    string name4 = "Erin";
    greet(name4);
}

/*
 * takes in a name string, and greets with printf statements
 */
void greet(string name)
{
    printf("hello, %s\n", name);
    printf("how are you doing, %s?\n", name);
}