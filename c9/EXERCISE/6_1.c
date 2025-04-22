// Write a program that uses fseek( ) to display every other byte 
// in a text file. (Remember, you must open the text file as a 
// binary file in order for fseek( ) to work properly.) Have the 
// user specify the file on the command line.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    long pos = 0;

    if(argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    if((fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Cannot open file %s.\n", argv[1]);
        return 1;
    }

    while(fseek(fp, pos, SEEK_SET) == 0 && (ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
        pos += 2; // Move to every other byte
    }

    fclose(fp);
    return 0;
}