/**
 * losing-precision.c
 * 
 * shows how typecasting can lose precision
 */
 
#include <stdio.h>

int main(void)
{
    float pi = 3.14159265358979323846264338327950288419716939937510;
    printf("pi as a float is %f\n", pi);
    printf("pi as an int is %i\n", (int) pi);
}