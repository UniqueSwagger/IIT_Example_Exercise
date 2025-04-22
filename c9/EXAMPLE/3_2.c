#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *from, *to;
    int ch1, ch2;
    int same = 1;
    unsigned long l = 0;

    if (argc != 3) {
        printf("Usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }

    if ((from = fopen(argv[1], "rb")) == NULL) {
        perror("Error opening first file");
        return 1;
    }

    if ((to = fopen(argv[2], "rb")) == NULL) {
        perror("Error opening second file");
        fclose(from);
        return 1;
    }

    while ((ch1 = fgetc(from)) != EOF && (ch2 = fgetc(to)) != EOF) {
        l++;
        if (ch1 != ch2) {
            printf("Files differ at byte number: %lu\n", l);
            same = 0;
            break;
        }
    }

    if (same && (fgetc(from) != EOF || fgetc(to) != EOF)) {
        printf("Files differ in size.\n");
        same = 0;
    }

    if (same) {
        printf("Files are same!\n");
    }

    if (fclose(from) == EOF) {
        perror("Error closing first file");
        return 1;
    }
    if (fclose(to) == EOF) {
        perror("Error closing second file");
        return 1;
    }

    return 0;
}
