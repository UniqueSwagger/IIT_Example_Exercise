// Write a program that prompts the user for a distance and 
// computes how long it takes light to travel that distance" Use an 
// unsigned long int to hold the distance. (Light travels at 
// approximately 186,000 miles per second.) 

#include <stdio.h>

int main(void) {
    unsigned long int distance;
    printf("Enter the distance: ");
    scanf("%lu", &distance);
    printf("It takes %f seconds for light to travel %lu miles\n", (float)distance/186000, distance);
    return 0;
}