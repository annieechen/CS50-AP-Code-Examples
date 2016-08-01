/*
 * visualize-insertion-sort.c
 *
 * demonstrates each step of bubble sort
 * 
 * can be ran as an in class demonstration, or provided as a code example
 
 * usage: ./visualize-insertion-sort [elements]
 * for instance: ./visualize-insertion-sort 3 9 8 7 6 5
 *
 * NOTE: rigorous error checking is traded for simplicity of code. It's very possible to break this program with improper input
 */
 
#include <stdio.h>
#include <cs50.h>

// prototypes
void printArray(int array[], int nElements);

int main(int argc, string argv[])
{
    // make sure there are some elements to sort
    if(argc < 2)
    {
        printf("usage: ./visualize-insertion-sort [elements] \n");
        return -1;
    }
    int nElements = argc - 1;
    // initialize original to be sorted
    int original[nElements];
    // load in original from command line arguments
    for (int i = 0; i < nElements; i++)
    {
        original[i] = atoi(argv[i + 1]);
    }
    printf("Start with: ");
    printArray(original, nElements);
    
    // now, let's get to sorting!
    // we start at 1 because we consider the first element sorted. 
    for (int i = 1; i < nElements; i++)
    {
        printf("So far, sorted array is: ");
        printArray(original, i);
        
        int temp = original[i];
        // now, we take the next unsorted element and move it into the sorted portion 
        int  j = i - 1;
        
        // shift down elements to make space to insert new one
        while ((temp < original[j]) && (j >= 0))
        {
            original[j + 1] = original[j];
            j--;
        }
        printf("Inserting %d\n", temp);
        // we use getChar here to pause execution until user hits enter
        getchar();
        original[j + 1] = temp;
    }
    printf("Sorted: ");
    printArray(original, nElements);
}

// takes in an int original and the number of elements in the original
// prints each element, separated by a spaces, and a newline at the end 
void printArray(int array[], int nElements)
{
    // iterate through each element in the original, printing it
    for(int i = 0; i < nElements; i++)
    {
        printf("%d ", array[i]);
    }
    // print newline once all elements have been printed
    printf("\n");
}
