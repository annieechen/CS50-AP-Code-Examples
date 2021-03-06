/**
 * scope-in-functions.c
 * 
 * illustrates how globals can be changed as a side effect of non-returning functions
 * and that variables declared within functions have local scope, and thus can only be referenced inside the function itself
 * 
 * NOTE: because this code tries to demonstrate scope by declaring multiple local variables with the same name, it throws a compiler warning
 * and thus doesn't compile under CS50's make, with the -Werror flag
 * 
 * The version in this folder has been compiled with 
 * 
 * `clang -ggdb3 -O0 -std=c11 -Wall scope-in-functions.c -o scope-in-functions`
 */
 
 #include<stdio.h>
 
 // prototypes
 void changeGlobal(void);
 void tryToChangeLocalVariable(void);
 void tryAgainToChangeLocal(int localVariable);
 
 // because this variable is declared outside of the `main` function, it can be accessed and modified by all functions
 int GLOBAL_VARIABLE = 0; 
 
 int main(void)
 {
     printf("GLOBAL_VARIABLE is currently %d\n", GLOBAL_VARIABLE);
     changeGlobal();
     // though we have not outright set GLOBAL_VARIABLE to a different value, the function has changed it as a side effect
     // this is generally considered poor practice
     // because it's difficult to track where the value has changed, code is hard to debug
     printf("GLOBAL_VARIABLE is now %d\n\n", GLOBAL_VARIABLE);
     
     // now, let's declare a variable within main
     int localVariable = 50;
     printf("localVariable is currently %d\n", localVariable);
     // now, we'll call a function that may appear to change localVariable
     tryToChangeLocalVariable();
     printf("localVariable is now %d\n", localVariable);
     // what does the above line print?
     // let's try a function that lets us pass in localVariable
     tryAgainToChangeLocal(localVariable);
     printf("localVariable is still %d\n", localVariable);
 }
 
 void changeGlobal(void)
 {
     GLOBAL_VARIABLE = 28;
 }
 
 void tryToChangeLocalVariable(void)
 {
     // here, I have to redeclare localVariable, because this function doesn't know about any variables declared within main
     int localVariable = 112;
     // thus, the value of the identically named variable within main doesn't change
 }
 
 void tryAgainToChangeLocal(int localVariable)
 {
     // here, though it appears that we're changing the same localVariable that was passed in, we're really only modifying a copy of it
     // this function only has access to variables inside its scope. It cannot change anything that was declared in main
     localVariable = 7;
 }