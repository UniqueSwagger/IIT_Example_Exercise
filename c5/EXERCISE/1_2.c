//  Write a program that reads ten numbers entered by the user and 
// reports if any of them match.

#include <stdio.h>

int main(void) {
    int num[10];
    int i, j;
    int match = 0;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (num[i] == num[j]) {
                match = 1;
                break;
            }
        }
    }

    if (match) {
        printf("There are matching numbers.\n");
    } else {
        printf("There are no matching numbers.\n");
    }

    return 0;
}