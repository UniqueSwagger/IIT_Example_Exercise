// Write a program that reads ten letters. After the letters have 
// been read, display the one that comes earliest in the alphabet. 
// (Hint: The one with the smallest value comes first.) 

#include <stdio.h>

int main(void) {
    char letter, smallest;
    int i;

    printf("Enter 10 letters: ");
    scanf("%c", &smallest);

    for (i = 1; i < 10; i++) {
        scanf(" %c", &letter);
        if (letter < smallest) {
            smallest = letter;
        }
    }

    printf("The smallest letter is: %c\n", smallest);

    return 0;
}