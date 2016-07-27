/**
 * how-many-cats.c
 * 
 * illustrates how exit codes can be used to show where programs error
 * 
 */

#include <stdio.h>
#include <cs50.h>

// remember our how-many-cats program from the previous module? We'll be looking at an alternate way to accomplish the same thing 
int main (int argc, string argv[])
{
    // make sure that there are only 2 command line arguments (the name of the program, and then the string after that)
    if(argc != 2)
    {
        // if not only 2, the program wasn't used correctly. 
        printf("Usage: ./how-many-cats <number of cats>\n");
        // in the previous version of this program, we simply used an if-else statement, so that the print statement only ran 
        // if the program was provided the right number of command line arguments
        // but now, we'll use an exit code to indicate failure
        return -1;
    }
    
    // we no longer need an else block here
    // because we only reach this code if we haven't already returned from main'
    
    // turn the second command line argument into an int
    int numCats = atoi(argv[1]);
    printf("You have %d cats. You need more cats!\n", numCats);
    // program has completed successfully
    return 0;
}