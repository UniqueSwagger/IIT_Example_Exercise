// Write a program that counts the number of bytes in a file (text 
//or binary) and displays the result. Have the user specify the file 
//to count on the command line. 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    long count = 0;
    char ch;
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    if((fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Cannot open file.\n");
        return 1;
    }
    while((ch = fgetc(fp)) != EOF) {
        count++;
    }
    fclose(fp);
    printf("Number of bytes in the file: %ld\n", count);
    return 0;
}