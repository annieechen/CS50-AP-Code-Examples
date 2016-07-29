/*
 * hand-sorting.c
 *
 * demonstrates how much more difficult sorting by a person becomes as the items to be sorted get larger
 * 
 * can be ran as an in class demonstration, or provided as a code example
 
 * usage: ./hand-sorting [elements]
 * for instance: ./hand-sorting 3 9 8 7 6 5
 *
 * NOTE: rigorous error checking is traded for simplicity of code. It's very possible to break this program with improper input
 */
 
#include <stdio.h>
#include <cs50.h>

// prototypes
void printArray(int array[], int nElements);
bool isEqual(int firstArray[], int secondArray[], int nElements);
void loadArray(string arrayString, int array[]);
void sortArray(int array[], int nElements);

int main(int argc, string argv[])
{
    // make sure there are some elements to sort
    if(argc < 2)
    {
        printf("usage: ./hand-sorting [elements]");
        return -1;
    }
    int nElements = argc -1;
    int original[nElements];
    // load in array from command line arguments
    for (int i = 0; i < nElements; i++)
    {
        original[i] = atoi(argv[i + 1]);
    }
    printf("Can you sort this array? \n");
    printArray(original, nElements);
    // sort it ourselves, so we have an answer to compare to
    sortArray(original, nElements);
    // allocate an array for answer
    int answer[nElements];
    printf("Type in the sorted array, with elements separated by spaces\n");
    string arrayString = GetString();
    loadArray(arrayString, answer);
    // while they are incorrect, keep giving tries
    while(!isEqual(original, answer, nElements))
    {
        printf("Oops! You made a mistake! You should write a computer program to sort for you ;) Try again!\n");
        printf("Type in the sorted array, with elements separated by spaces\n");
        arrayString = GetString();
        loadArray(arrayString, answer);
    }
    // now, they must be correct
    printf("Congrats! You're correct! Try sorting a larger set of numbers!\n");
}

// takes in an int array and the number of elements in the array
// prints each element, separated by a spaces, and a newline at the end 
void printArray(int array[], int nElements)
{
    // iterate through each element in the array, printing it
    for(int i = 0; i < nElements; i++)
    {
        printf("%d ", array[i]);
    }
    // print newline once all elements have been printed
    printf("\n");
}

// takes in two arrays and returns whether they're equal
// NOTE: assumes the two arrays are equal in length
bool isEqual(int firstArray[], int secondArray[], int nElements)
{
    for (int i = 0; i < nElements; i++)
    {
        if(firstArray[i] != secondArray[i])
            return false;
    }
    return true;
}

// takes in a string of elements separated by spaces, and loads them into an array
// NOTE: this function makes use of pointer arithmetic, which isn't covered until later
// treat it as an abstraction: you don't need to know how it works
// just that it takes a string of numbers and loads them into the array
void loadArray(string arrayString, int array[])
{
    char* startptr = arrayString;
    char* endptr;
    int i = 0;
    while(*startptr != '\0')
    {
        array[i] = strtol(startptr, &endptr, 10);
        startptr = endptr;
        i++;
    }
}

// takes in an int array and sorts using bubble sort
void sortArray(int array[], int nElements)
{
    int temp;
    bool hadSwap = false;
    for (int i = 0; i < nElements; i++)
    {
        hadSwap = false;
        for (int j = 0; j < nElements - i - 1; j++)
        {
            // if element is greater than the one after it, swap the two elements
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                hadSwap = true;
            }
        }
        // if nothing was swapped in a round, it's all been sorted
        if (!hadSwap)
        {
            return;
        }
    }
}