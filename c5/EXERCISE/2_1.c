// Write a program that inputs a string, then displays it backward 
// on the screen

#include <stdio.h>

#define SIZE 100

int main(void) {
    char str[SIZE];
    int i;

    printf("Enter a string: ");
    for (i = 0; i < SIZE; i++) {
        scanf("%c", &str[i]);
        if (str[i] == '\n') {
            break;
        }
    }

    printf("The string in reverse is: ");
    for (i--; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}