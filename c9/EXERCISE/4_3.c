// Write a program that copies a text file . Specify both the source 
// and destination file names on the command line. Use fgets( ) 
// and fputs( ) to copy the file. Include full error checking. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
    FILE *src_fp, *dest_fp;
    char str[80];

    if(argc != 3) {
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }
    if((src_fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Cannot open source file %s.\n", argv[1]);
        return 1;
    }
    if((dest_fp = fopen(argv[2], "w")) == NULL) {
        fclose(src_fp);
        fprintf(stderr, "Cannot open destination file %s.\n", argv[2]);
        return 1;
    }
    while(fgets(str, sizeof(str), src_fp) != NULL) {
        fputs(str, dest_fp);
    }
    fclose(src_fp);
    fclose(dest_fp);
    printf("File copied successfully from %s to %s.\n", argv[1], argv[2]);
    return 0;
}