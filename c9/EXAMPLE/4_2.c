#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    double lf;
    int d;
    char str[80];

    fp = fopen(argv[1], "w");

    fprintf(fp, "%f %d %s", 1234.56, 125, "Hello world.");
    fclose(fp);

    fp = fopen(argv[1], "r");

    fscanf(fp, "%lf%d%s", lf, d, str);
    printf("%f %d %s", lf, d, str);
    fclose(fp);
}