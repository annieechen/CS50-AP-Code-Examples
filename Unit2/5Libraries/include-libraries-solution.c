/**
 * include-libraries-solution.c
 * 
 * includes the header files to make include-libraries.c compile
 * 
 */
 
 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 
 int main(void)
 {
     printf("Hello World\n");
     
     int numCharacters = strlen("Hello World");
     
     printf("Hello World has %d letters in it\n", numCharacters);
     printf("2 squared is %f\n", pow(2,2));
 }