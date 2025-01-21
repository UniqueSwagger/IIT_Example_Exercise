// Write a program that creates a string table containing the 
// English words for the numbers 0 through 9. Using this table, 
// allow the user to enter a digit (as a character) and then have 
// your program display the word equivalent. (Hint: to obtain an 
// index into the table, subtract '0' from the character entered.)

#include <stdio.h>

int main(void) {
    char table[][100] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    char ch;

    printf("Enter a digit: ");
    scanf("%c", &ch);

    if (ch < '0' || ch > '9') {
        printf("Invalid digit.\n");
    } else {
        printf("You entered the number %s.\n", table[ch - '0']);
    }

    return 0;
}