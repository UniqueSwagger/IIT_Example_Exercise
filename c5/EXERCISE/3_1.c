//  Write a program that defines a 3x3x3 three-dimensional array, 
// and load it with the numbers 1 to 27. 

#include <stdio.h>

int main(void) {
    int arr[3][3][3];
    int i, j, k;
    int count = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                arr[i][j][k] = count++;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}