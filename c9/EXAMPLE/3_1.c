#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *from, *to;
    int ch;

    // Check for correct number of cmd arguments
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source> <destination>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Open source file for reading
    if ((from = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Error: Cannot open source file '%s'.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    // Open destination file for writing
    if ((to = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "Error: Cannot open destination file '%s'.\n", argv[2]);
        fclose(from); // Close source file before exiting
        exit(EXIT_FAILURE);
    }

    // Copy contents from source to destination
    while ((ch = fgetc(from)) != EOF) {
        if (fputc(ch, to) == EOF) {
            fprintf(stderr, "Error: Writing to destination file failed.\n");
            fclose(from);
            fclose(to);
            exit(EXIT_FAILURE);
        }
    }

    // Close source file
    if (fclose(from) == EOF) {
        fprintf(stderr, "Error: Failed to close source file.\n");
        fclose(to); // Ensure destination file is closed
        exit(EXIT_FAILURE);
    }

    // Close destination file
    if (fclose(to) == EOF) {
        fprintf(stderr, "Error: Failed to close destination file.\n");
        exit(EXIT_FAILURE);
    }

    printf("File copied successfully.\n");
    return EXIT_SUCCESS;
}