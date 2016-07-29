/*
 * visualize-bubble-sort.c
 *
 * demonstrates each step of bubble sort
 * 
 * can be ran as an in class demonstration, or provided as a code example
 
 * usage: ./visualize-bubble-sort [elements]
 * for instance: ./visualize-bubble-sort 3 9 8 7 6 5
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
        printf("usage: ./hand-sorting [elements]");
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
    
    for (int i = 0; i < nElements; i++)
    {
        // we keep track of this so that once an original is sorted, we know
        bool hadSwap = false;
        
        for (int j = 0; j < nElements - i - 1; j++)
        {
            // if element is greater than the one after it, swap the two elements
            if(original[j] > original[j + 1])
            {
                printf("Swapping %i and %i\n", original[j], original[j + 1]);
                int temp = original[j];
                original[j] = original[j + 1];
                original[j + 1] = temp;
                hadSwap = true;
                printf("Now: ");
                printArray(original,nElements);
                // we use getChar here to pause execution until user hits enter
                getchar();
            }
        }
        // if nothing was swapped in a round, it's all been sorted
        if (!hadSwap)
        {
            printf("No swaps in this pass of the array, so we know it's sorted\n");
            getchar();
            break;
        }
        printf("Starting a new pass\n");
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
