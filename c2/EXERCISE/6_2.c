// Write a program that prompts the user for an integer value.
// Next, using a for loop, make it count down from this value to 0,
// displaying each number .on its own line. When it reaches 0, have
// it sound the bell.

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (int i = num; i >= 0; i--) {
        printf("%d\n", i);
    }
    printf("\a"); // for the bell sound
    return 0;
}