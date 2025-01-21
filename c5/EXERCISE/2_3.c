// Write a program that repeatedly inputs strings. Each time a 
// string is input, concatenate it with a second string called bigstr. 
// Add newlines to the end of each string. If the user types quit, 
// stop inputting and display bigstr (which will contain a record of 
// all strings input). Also stop ifbigstr will be overrun by the next 
// concatenation.

#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {
    char str[SIZE];
    char bigstr[SIZE];
    int i;

    bigstr[0] = '\0';

    while (1) {
        printf("Enter a string: ");
        for (i = 0; i < SIZE; i++) {
            scanf("%c", &str[i]);
            if (str[i] == '\n') {
                break;
            }
        }

        if (str[0] == 'q' && str[1] == 'u' && str[2] == 'i' && str[3] == 't') {
            break;
        }

        if (i + 1 + strlen(bigstr) > SIZE) {
            break;
        }

        str[i] = '\n';
        str[i + 1] = '\0';
        strcat(bigstr, str);
    }

    printf("The concatenated string is: %s\n", bigstr);

    return 0;
}