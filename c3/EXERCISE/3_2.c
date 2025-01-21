// To create time-delay loops, for loops with empty targets are 
// often used. Create a program that asks the user for a number 
// and then iterates until zero is reached . Once the countdown is 
// done , sound the hell, but don't display anything on the screen. 

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num--) {
        ;
    }

    printf("\a");

    return 0;
}