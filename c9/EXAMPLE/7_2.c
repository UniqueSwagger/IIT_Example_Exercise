#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
    FILE *fp;
    fp = fopen(argv[1], "rb");
    char s;
    while(!feof(fp)) {
        s = getc(fp);
        putchar(s);
    }

    rewind(fp);
    while(!feof(fp)) {
        s = getc(fp);
        putchar(s);
    }
    fclose(fp);
    return 0;
}