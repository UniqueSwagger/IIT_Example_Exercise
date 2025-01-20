#include <stdio.h>
// Write a program that prints the numbers between 17 and 100
// that can be evenly divided by 17..


int main(void) {
    for (int i = 17; i <= 100; i++) {
        if (i % 17 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}