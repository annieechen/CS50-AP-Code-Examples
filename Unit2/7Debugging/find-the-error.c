/**
 * find-the-error.c
 * 
 * this program doesn't do what it's supposed to do! 
 * 
 * Can you figure out
 * a. What the author probably wanted it to do
 * b. The bug
 * c. How to fix it?
 * 
 * NOTE: can be used as a worksheet/in class exercise
 */
 
 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char help[] = "?????";
    int n = strlen(help);
    
    for(int i = 0; i < n; n++)
    {
        help[i] = '!';
    }
    printf("%s\n", help);
}