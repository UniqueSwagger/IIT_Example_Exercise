// Write a program that prints only the odd numbers between 1 
// and 100. Use a for loop that looks like this: 
// for(i=l; i<101; i++) ... 
// Use a continue statement to avoid printing even numbers

#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i < 101; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}