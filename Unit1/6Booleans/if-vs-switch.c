/**
 * if-vs-switch.c
 * 
 * demonstrates a series of if statements
 * and then uses switch to represent the same logic
 * 
 */    
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // let's write a program that tells the user what they should do
    // based on how hard it's raining outside, on a skill from 1-5
    
    // use a do-while loop (see while-to-do-while.c) to make sure user input is btwn 1-5
    int rainlevel;
    do
    {
        printf("How hard is it raining, on a scale from 1-5?\n");
        rainlevel = GetInt();
    }
    while (rainlevel < 1 || rainlevel > 5);
    
    // now, we have to create a series of if statements to address each possibility
    if (rainlevel == 1)
    {
        printf("It's not raining hard! Go outside!\n");
    }
    if (rainlevel == 2)
    {
        printf("Bring a raincoat, and you'll be fine!\n");
    }
    if (rainlevel == 3)
    {
        printf("You should probably grab an umbrella if it's raining that hard!\n");
    }
    if (rainlevel == 4)
    {
        printf("Stay inside, or you'll get soaked!\n");
    }
    if (rainlevel == 5)
    {
        printf("Someone alert The Weather Channel! It's a hurricane!\n");
    }
    
    // since we know that rainlevel will always be one of 5 possibilities
    // a switch statement would accomplish the same thing more elegantly
    
    printf("\nNow with a switch statement\n\n");
    
    switch(rainlevel)
    {
        // note that for each case, we must break, otherwise all the
        case 1:
            printf("It's not raining hard! Go outside!\n");
            break;
        case 2:
            printf("Bring a raincoat, and you'll be fine!\n");
            break;
        case 3:
            printf("You should probably grab an umbrella if it's raining that hard!\n");
            break;
        case 4:
            printf("Stay inside, or you'll get soaked!\n");
            break;
        case 5:
            printf("Someone alert The Weather Channel! It's a hurricane!\n");
            break;
    }
}