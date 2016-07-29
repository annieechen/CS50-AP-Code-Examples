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
        printf("usage: visualize-insertion-sort\n");
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
        printf("Checking for smallest, starting with %d\n", original[i]);
        // store the index of the minimum of the unsorted array
        int smallest = i;
        for (int j = i + 1; j < nElements; j++)
        {
            if(original[j] < original[smallest])
            {
                smallest = j;
            }
        }
        // now, let's add the smallest element from unsorted to the sorted
        printf("%i is the smallest element in the unsorted array\n", original[smallest]);
        // by swapping it with the first element in the unsorted array
        printf("Swapping %i and %i\n", original[i], original[smallest]);
        int temp = original[i];
        original[i] = original[smallest];
        original[smallest] = temp;
        printArray(original, nElements);
        // use getchar here to pause program until user hits enter
        getchar();
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
