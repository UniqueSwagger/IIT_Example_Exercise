// Write a program that displays the contents of the text file 
// specified on the command line. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;

    if(argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    if((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}