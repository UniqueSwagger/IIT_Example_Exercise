// Write a program that allows a user to input as many double 
// values as desired (up to 32.767) and writes them to a disk file as 
// they are entered. Call this file VALUES. Keep a count of the 
// number of values entered. and write this number to a file called 
// COUNT. 

#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp_values, *fp_count;
    double value;
    int count = 0;

    // Open the file for writing
    if((fp_values = fopen("VALUES", "wb")) == NULL) {
        fprintf(stderr, "Cannot open VALUES file.\n");
        return 1;
    }
    if((fp_count = fopen("COUNT", "wb")) == NULL) {
        fclose(fp_values);
        fprintf(stderr, "Cannot open COUNT file.\n");
        return 1;
    }

    // Input values from user
    printf("Enter double values (enter a non-numeric value to stop):\n");
    while(scanf("%lf", &value) == 1) {
        fwrite(&value, sizeof(double), 1, fp_values);
        count++;
    }

    // Write the count to the COUNT file
    fwrite(&count, sizeof(int), 1, fp_count);

    fclose(fp_values);
    fclose(fp_count);

    printf("Values written to VALUES file and count written to COUNT file.\n");

    return 0;
}