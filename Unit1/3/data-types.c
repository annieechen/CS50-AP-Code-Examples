/**
 * data-types.c
 * 
 * demonstrates some of the data types in c
 * does not cover all the complexities of data types in c
 * for more detail, visit http://www.tutorialspoint.com/cprogramming/c_data_types.htm
 */
       
#include <cs50.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    // declare an int, give it value 50
    int x = 50;
    printf("x is a variable of type int with value %i\n", x);
    
    // display the max and min values a signed int can hold
    // INT_MIN and INT_MAX are constants from the header file limits.h
    printf("Minimum int value: %i\n", INT_MIN);
    printf("Maximum int value: %i\n", INT_MAX);
    
    // declare a boolean variable, give it value true
    bool isItTrue = true;
    printf("isItTrue is a variable of type bool with value %i\n", isItTrue);
    // explain to students that the above statement printed 1 
    // because booleans are stored in computers not as true or false, but rather
    // 1 or 0
    
    // declare a single char variable, give it value 's'
    char letter = 's';
    printf("letter is a variable of type char with value %c\n", letter);
}