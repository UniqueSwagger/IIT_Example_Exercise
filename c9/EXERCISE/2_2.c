// Write a program that reads a text file and counts how many 
// times each letter from 'A' to 'Z' occurs. Have it display the results. 
// (Do not differentiate between upper- and lowercase letters.) 

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    int count[26] = {0};
    if(argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if(fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        if(isalpha(ch)) {
            count[tolower(ch) - 'a']++;
        }
    }
    fclose(fp);

    for(int i = 0; i < 26; i++) {
        printf("Count of %c is: %d\n", 'a' + i, count[i]);
    }
    return 0;
}
