// Using the file you created in Exercise 1. write a program that 
// first reads the number of items in VALUES from COUNT. Next. 
// read the values in VALUES and display them. 

#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp_values, *fp_count;
    double value;
    int count = 0;

    // Open the COUNT file to read the number of items
    if((fp_count = fopen("COUNT", "rb")) == NULL) {
        fprintf(stderr, "Cannot open COUNT file.\n");
        return 1;
    }
    fread(&count, sizeof(int), 1, fp_count);
    fclose(fp_count);

    // Open the VALUES file to read the values
    if((fp_values = fopen("VALUES", "rb")) == NULL) {
        fprintf(stderr, "Cannot open VALUES file.\n");
        return 1;
    }

    // Read and display the values
    printf("Number of values: %d\n", count);
    printf("Values:\n");
    for(int i = 0; i < count; i++) {
        fread(&value, sizeof(double), 1, fp_values);
        printf("%lf\n", value);
    }

    fclose(fp_values);

    return 0;
}