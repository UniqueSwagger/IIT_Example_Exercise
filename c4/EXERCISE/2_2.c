// Write a program that contains a function called soundspeed( ), 
// which computes the number of seconds it will take sound to 
// travel a speCified distance . Write the program two ways: first, 
// with soundspeed( ) as a non-general function and second, with 
// soundspeed( ) parameterized. (For the speed of sound, use 
// 1129 feet per second). 

#include <stdio.h>

float soundspeed(void);
float soundspeed_param(float distance);

int main(void) {
    float distance;
    printf("Enter the distance: ");
    scanf("%f", &distance);
    printf("It takes %f seconds for sound to travel %f feet\n", soundspeed(), distance);
    printf("It takes %f seconds for sound to travel %f feet\n", soundspeed_param(distance), distance);
    return 0;
}

float soundspeed(void) {
    return 1129;
}

float soundspeed_param(float distance) {
    return distance/1129;
}