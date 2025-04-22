// Write a program that searches a file, specified on the command 
// line, for a specific integer value (also speCified on the command 
// line). If this value is found, have the program display its 
// location, in bytes, relative to the start of the file. 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int value, search_value, pos = 0;
    int found = 0;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s <filename> <search_value>\n", argv[0]);
        return 1;
    }

    search_value = atoi(argv[2]);

    if((fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Cannot open file %s.\n", argv[1]);
        return 1;
    }

    while(fread(&value, sizeof(int), 1, fp) == 1) {
        if(value == search_value) {
            printf("Value %d found at position %d bytes.\n", search_value, pos);
            found = 1;
            break;
        }
        pos += sizeof(int);
    }

    if(!found) {
        printf("Value %d not found in the file.\n", search_value);
    }

    fclose(fp);
    return 0;
}