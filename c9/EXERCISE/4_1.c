// In Chapter 6 you wrote a very simple telephone-directory 
// program. Write a program that expands on this concept by 
// allowing the directory to be saved to a disk fIle. Have the 
// program present a menu that looks like this: 
// 1. Enter the names and numbers 
// 2. Find numbers 
// 3. Save directory to disk 
// 4. Load directory from disk 
// 5. Quit 
// The program should be capable of storing 100 names and 
// numbers. (Use only first names if you like.) Use fprintf( ) to 
// save the directory to disk and fscanf( ) to read it back into 
// memory.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LENGTH 40

char name[MAX_ENTRIES][MAX_LENGTH], number[MAX_ENTRIES][MAX_LENGTH];
int loc = 0;

int menu();
void enter();
void find();
void save();
void load();

int main() {
    int choice;
    while ((choice = menu()) != 5) {
        switch (choice) {
            case 1: enter(); break;
            case 2: find(); break;
            case 3: save(); break;
            case 4: load(); break;
            default: printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

int menu() {
    printf("1. Enter\n");
    printf("2. Find\n");
    printf("3. Save\n");
    printf("4. Load\n");
    printf("5. Quit\n");
    printf("Enter your choice: ");

    char input[10];
    fgets(input, sizeof(input), stdin);
    return atoi(input);
}

void enter() {
    printf("Enter names and numbers (leave name empty to stop):\n");
    while (loc < MAX_ENTRIES) {
        printf("Name: ");
        fgets(name[loc], MAX_LENGTH, stdin);
        name[loc][strcspn(name[loc], "\n")] = '\0'; // Remove newline
        if (strlen(name[loc]) == 0) break;

        printf("Number: ");
        fgets(number[loc], MAX_LENGTH, stdin);
        number[loc][strcspn(number[loc], "\n")] = '\0'; // Remove newline
        loc++;
    }
}

void find() {
    char search[MAX_LENGTH];
    printf("Enter the name to find: ");
    fgets(search, MAX_LENGTH, stdin);
    search[strcspn(search, "\n")] = '\0'; // Remove newline

    for (int i = 0; i < loc; i++) {
        if (strcmp(search, name[i]) == 0) {
            printf("%s is the owner of %s\n", name[i], number[i]);
            return;
        }
    }
    printf("Name not found.\n");
}

void save() {
    FILE *fp = fopen("phone.txt", "w");
    if (!fp) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < loc; i++) {
        fprintf(fp, "%s %s\n", name[i], number[i]);
    }
    fclose(fp);
    printf("Directory saved to disk.\n");
}

void load() {
    FILE *fp = fopen("phone.txt", "r");
    if (!fp) {
        printf("Error opening file for reading.\n");
        return;
    }

    loc = 0;
    while (fscanf(fp, "%s %s", name[loc], number[loc]) == 2 && loc < MAX_ENTRIES) {
        loc++;
    }
    fclose(fp);
    printf("Directory loaded from disk.\n");
}