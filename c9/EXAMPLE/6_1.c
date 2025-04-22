#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    long loc;
    if(argc!=2) {
        printf("File name missing.\n");
        exit(1);
    }

    if((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Enter byte to seek:\n");
    scanf("%ld", &loc);
    if(fseek(fp, loc, SEEK_SET)) {
        printf("Seek error.\n");
        exit(1);
    }

    printf("Value at %ld is %c\n", loc, getc(fp));
    fclose(fp);
}