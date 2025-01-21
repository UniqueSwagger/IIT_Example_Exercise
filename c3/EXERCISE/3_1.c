// Write a program that computes driving time when given the 
// distance and the average speed. Let the user specifY the 
// number of drive time computations he or she wants to perform

#include <stdio.h>

int main(void) {
    int i, num;
    float distance, speed, time;

    printf("Enter the number of computations: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Enter distance and average speed: ");
        scanf("%f %f", &distance, &speed);
        time = distance / speed;
        printf("Driving time: %.2f\n", time);
    }

    return 0;
}