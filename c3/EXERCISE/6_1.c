// Write a program that finds aJl the prime numbers between 2 
// and 1000.

#include <stdio.h>

int main(void) {
    int i, j, is_prime;

    for (i = 2; i <= 1000; i++) {
        is_prime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}