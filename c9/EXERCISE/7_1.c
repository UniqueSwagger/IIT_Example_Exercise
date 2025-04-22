// Improve the erase program so that it notifies the user ifhe or 
// she tries to remove a nonexistent file. 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char fname[80];

    printf("Enter the filename to remove: ");
    fgets(fname, sizeof(fname), stdin);
    printf("Are you sure you want to delete '%s'? (y/n): ", fname);
    if (toupper(getchar()) == 'Y') {
        if (remove(fname) == 0) {
            printf("File '%s' removed successfully.\n", fname);
        } else {
            perror("Error removing file");
        }
    } else {
        printf("Operation canceled.\n");
    }

    return 0;
}