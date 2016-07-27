/**
 * include-libraries.c
 * 
 * NOTE: This program is not meant to compile
 * shows that library header files must be included to use their functions
 * 
 */
 
 int main(void)
 {
     printf("Hello World\n");
     int numCharacters = strlen("Hello World");
     printf("Hello World has %d letters in it\n", numCharacters);
     printf("2 squared is %f\n", pow(2.0,2.0));
 }