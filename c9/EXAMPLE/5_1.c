#include<stdio.h>
#include<stdlib.h>

int main() {
    double d[10] = {10.23, 5.2, 5.69, 45.78, 4566.98, 78.65, 47.87, 96.33, 52.47, 100.23};

    FILE *fp;
    if((fp = fopen("myfile", "wb"))==NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    for(int i=0;i<10;i++) {
        if(fwrite(&d[i], sizeof(d[0]), 1, fp) != 1) {
            printf("Error writing from file.\n");
            exit(1);
        }
    }

    fclose(fp);

    if((fp = fopen("myfile", "rb")) == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    for(int i=0;i<10;i++) d[i] = -1.0;

    for(int i=0;i<10;i++) {
        if(fread(&d[i], sizeof(d[0]), 1, fp) != 1) {
            printf("Error reading.\n");
            exit(1);
        }
    }
    fclose(fp);

    for(int i=0;i<10;i++) printf("%f ", d[i]);
}