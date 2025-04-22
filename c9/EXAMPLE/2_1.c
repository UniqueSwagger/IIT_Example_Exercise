#include<stdio.h>
#include<stdlib.h>

int main() {
    char str[80] = "My name is Shohidur Rahman\n";
    char *p;
    FILE *fp;

    if ((fp = fopen("myfile.txt", "w")) == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }

    p = str;
    while (*p) {
        if (fputc(*p, fp) == EOF) {
            printf("Error writing!\n");
            fclose(fp);
            exit(1);
        }
        p++;
    }

    fclose(fp);
    printf("File written successfully!\n");

    return 0;
}