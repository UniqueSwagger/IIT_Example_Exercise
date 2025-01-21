// Write a program that displays the ASCII codes for the characters 
// A through Z and a through z. How do the codes differ between 
// the upper- and lowercase characters? 

#include <stdio.h>

int main(void) {
    char letter;
    int i;

    for (i = 65; i < 91; i++) {
        letter = i;
        printf(" %c is %d\n", letter, i);
    }

    for (i = 97; i < 123; i++) {
        letter = i;
        printf(" %c is %d\n", letter, i);
    }

    return 0;
}