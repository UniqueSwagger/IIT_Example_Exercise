// Write a program that copies the contents of one text file to 
// another. However, use only "console" I/O functions and 
// redirection to accomplish the file copy.

#include <stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}
