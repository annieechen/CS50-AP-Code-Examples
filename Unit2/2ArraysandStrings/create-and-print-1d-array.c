/**
 * create-and-print-1d-array.c
 * 
 * demonstrates how to initialize an array, iterate through printing, and sum up all the elements
 * 
 */
 

#include <stdio.h>

// prototypes
void printArray(int array[], int nElements);
int sumArray(int array[], int nElements);

int main(void)
{
    // initialize every element in the array of length 5 to 0
    // NOTE: this only works for 0
    // so you couldn't do int array[5] = {50};
    int array[5] = {0};
    // let's store how long the array is, so that we can loop through it later
    int nElements = 5;
    printf("Contents of array after initializing: ");
    printArray(array, nElements);
    
    // now, let's change some elements
    // this sets the 1st element (remember 0-indexing!) to 10
    array[0] = 10;
    // this sets the last element to 15
    array[4] = 15;
    // NOTE: You cannot access array[5]. Doing so would give you a segmentation fault
    printf("Contents of array after changing some elements: ");
    printArray(array, nElements);
    
    // now, let's try increasing all the elements in the array by 1 with a for loop
    for(int i = 0; i < nElements; i++)
    {
        array[i]++;
    }
    printf("Contents of array after adding 1 to everything: ");
    printArray(array, nElements);
    
    // finally, let's sum up all the elements in the array
    int sum = sumArray(array, nElements);
    printf("Sum of all the elements in the array: %d\n", sum);
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

// takes in an int array and the number of elements in the array
// returns the total value of all elements summed up
int sumArray(int array[], int nElements)
{
    int counter = 0;
    // for each element in the array, add its value to counter
    for (int i = 0; i < nElements; i++)
    {
        counter += array[i];
    }
    return counter;
}