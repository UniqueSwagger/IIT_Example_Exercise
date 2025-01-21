// Write a program that defines a 3x3x3 three-dimensional array, 
// and load it with the numbers I to 27. 
// 2. Have the program from the first exercise display the sum of its 
// elements. 

#include <stdio.h>

int main(void) {
    int arr[3][3][3];
    int i, j, k;
    int count = 1;
    int sum = 0;

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
                sum += arr[i][j][k];
            }
        }
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}