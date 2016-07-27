/**
 * loop-through-string.c
 * 
 * demonstrates that like with an int array, you can loop through every character in a string and modify each one
 * 
 */
 

#include <stdio.h>
#include <cs50.h>
// ctype is included so we can use the toupper function
#include <ctype.h>
// string.h is included so we can use the strlen function
#include <string.h>

// prototypes
void printArray(int array[], int nElements);

int main(void)
{
    int array[5] = {0,1,2,3,4};
    int arraylength = 5;
    printf("int array is is initialized to: ");
    printArray(array, arraylength);
    // now, let's multiply every element in the array by 2
    for (int i = 0; i < arraylength; i++)
    {
        array[i] *=2 ;
    }
    // and print out what the array holds now
    printf("int array is now: ");
    printArray(array, 5);
    
    // now, let's do the same thing with a string array
    char greeting[] = "hello world";
    // printf gives us a way to see the whole string without writing our own explicit function, like printArray
    printf("greeting is : %s\n", greeting);
    
    int stringlength = strlen(greeting);
    // by changing all the letters to uppercase
    for(int i = 0; i < stringlength; i++)
    {
        greeting[i] = toupper(greeting[i]);
    }
    printf("greeting is now : %s\n", greeting);
}

// takes in an int array and the number of elements in the array
// prints each element, separated by 2 spaces, and a newline at the end 
void printArray(int array[], int nElements)
{
    // iterate through each element in the array, printing it
    for(int i = 0; i < nElements; i++)
    {
        printf("%d  ", array[i]);
    }
    // print newline once all elements have been printed
    printf("\n");
}