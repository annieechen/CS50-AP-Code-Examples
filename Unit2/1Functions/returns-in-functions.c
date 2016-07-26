/**
 * returns-in-functions.c
 * 
 * shows what it means for a function to return a value. 
 * NOTE: functions should probably never be used like this in actual programs
 * 
 */
 
 #include <stdio.h>
 
 // prototypes for functions before main, so that the compiler doesn't throw errors
 int returnEight(void);
 
 int main(void)
 {
     int x = returnEight();
     printf("x is: %d\n", x);
     
     int y = returnEight() + returnEight();
     printf("y is: %d\n", y);
 }
 
 // this function takes in no values (hence why "void" is the only thing within the parentheses)
 // and returns 8 every time. 
 int returnEight(void)
 {
     return 8;
 }
 