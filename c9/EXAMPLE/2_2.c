#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;

    if(argc != 3) {
        fprintf(stderr, "Usage: %s <filename> <character>\n", argv[0]);
        return 1;
    }

    if((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while((ch = fgetc(fp)) != EOF) {
        if(ch == *argv[2]) {
            printf("%c found\n", ch);
            break;
        }
    }
    fclose(fp);
    return 0;
}