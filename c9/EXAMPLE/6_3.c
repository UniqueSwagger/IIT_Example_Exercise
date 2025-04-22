#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "wb");
    if (!fp) {
        perror("Error opening file for writing");
        return 1;
    }

    double numbers[] = {10.23, 19.87, 1002.23, 12.9, 0.897, 
                        11.45, 75.34, 0.0, 1.01, 875.875};

    if (fwrite(numbers, sizeof(double), 10, fp) != 10) {
        perror("Error writing to file");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    fp = fopen(argv[1], "rb");
    if (!fp) {
        perror("Error opening file for reading");
        return 1;
    }

    long index;
    printf("Enter the index (1-10) of the number you want to read: ");
    if (scanf("%ld", &index) != 1 || index < 1 || index > 10) {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
        fclose(fp);
        return 1;
    }

    fseek(fp, (index - 1) * sizeof(double), SEEK_SET);

    double value;
    if (fread(&value, sizeof(double), 1, fp) != 1) {
        perror("Error reading from file");
        fclose(fp);
        return 1;
    }

    printf("The %ldth number is: %f\n", index, value);
    fclose(fp);

    return 0;
}