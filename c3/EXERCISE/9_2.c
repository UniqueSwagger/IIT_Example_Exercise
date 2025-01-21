// Write a program that counts the numbers of letters, digits, 
// and common punctuation symbols entered by the user. Stop 
// inputting when the user presses ENTER. Use a switch statement 
// to categorize the characters into punctuation, digits, and letters. 
// When the program ends, report the number of characters in 
// each category. (If you like ,simply assume that, if a character is 
// not a digit or punctuation, it is a letter. Also, just use the most 
// common punctuation symbols.) 

#include <stdio.h>

int main(void) {
    char ch;
    int letters = 0, digits = 0, punctuation = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case ' ':
            case '.':
            case ',':
            case ';':
            case ':':
            case '!':
            case '?':
                punctuation++;
                break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                digits++;
                break;
            default:
                letters++;
                break;
        }
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Punctuation: %d\n", punctuation);

    return 0;
}