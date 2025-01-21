// Write a program that uses goto to emulate a while loop that 
// counts from 1 to 10.

#include <stdio.h>

int main(void) {
    int i = 1;

start:
    printf("%d ", i);
    i++;
    if (i <= 10) {
        goto start;
    }

    printf("\n");

    return 0;
}
