//  Write a program that reads ten characters from the keyboard. 
// Each time a character is read, use its ASCII code value to output 
// a string of periods equal in number to this code. For example, 
// given the letter 'A', whose code is 65, your program would 
// output 65 periods

#include <stdio.h>

int main(void) {
    char letter;
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nEnter a character: ");
        scanf(" %c", &letter);
        printf("ASCII code: %d\n", letter);
        for (int j = 0; j < letter; j++) {
            printf(".");
        }
        printf("\n");
    }

    return 0;
}