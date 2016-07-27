/**
 * how-many-cats.c
 * 
 * illustrates how command line arguments can be used within the program
 * 
 */

#include <stdio.h>
#include <cs50.h>

// rather than declaring main as `int main(void)`, specify that main takes in the number of arguments (argc), and an array of the arguments (argv[])
// argc and argv are automatically set when the program is run
int main (int argc, string argv[])
{
    // make sure that there are only 2 command line arguments (the name of the program, and then the string after that)
    if(argc != 2)
    {
        // if not only 2, the program wasn't used correctly. 
        printf("Usage: ./how-many-cats <number of cats>\n");
    }
    else
    {
        // turn the second command line argument into an int
        int numCats = atoi(argv[1]);
        printf("You have %d cats. You need more cats!\n", numCats);
    }
}