// In Chapter 9, you wrote a program that created a telephone 
// directory that was stored on disk. Improve the program so that it 
// uses an array of structures, each containing a person's name, 
// area code, and telephone number. Store the area code as an 
// integer. Store the name and telephone number as strings. Make 
// the array MAX elements long, where MAX is any convenient 
// value that you choose. 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 2

struct phone {
    char name[80];
    unsigned code;
    char num[80];
} ph[MAX];

void enter(void);
void load(void);
void search_name(void);
void search_number(void);
int menu(void);
void save(void);
void display(struct phone temp);
void display_all(void);

int main() {
    load();       // Load saved data (if exists)
    display_all(); // Show first catalog

    int i;
    do {
        i = menu();
        switch (i) {
            case 1:
                enter();
                break;
            case 2:
                search_name();
                break;
            case 3:
                search_number();
                break;
            case 4:
                save();
                break;
        }
    } while (i != 5);

    return 0;
}

int menu() {
    char str[80];
    int i;
    printf("\nEnter your selection:\n");
    printf("\t1. Enter\n");
    printf("\t2. Search by name\n");
    printf("\t3. Search by number\n");
    printf("\t4. Save\n");
    printf("\t5. Quit\n");

    do {
        fgets(str, sizeof(str), stdin);
        i = atoi(str);
    } while (i < 1 || i > 5);

    return i;
}

void enter() {
    char str[80];
    for (int top = 0; top < MAX; top++) {
        printf("Enter name: \n");
        fgets(ph[top].name, sizeof(ph[top].name), stdin);

        printf("Enter code: \n");
        fgets(str, sizeof(str), stdin);
        ph[top].code = (unsigned)atoi(str);

        printf("Enter number: \n");
        fgets(ph[top].num, sizeof(ph[top].num), stdin);
        ph[top].num[strcspn(ph[top].num, "\n")] = 0;
    }
}

void display(struct phone temp) {
    printf("%s has the area code %u and number %s\n", temp.name, temp.code, temp.num);
}

void display_all() {
    printf("\n--- Current Catalog ---\n");
    for (int i = 0; i < MAX; i++) {
        display(ph[i]);
    }
    printf("-----------------------\n");
}

void save() {
    FILE *fp = fopen("phone", "wb");
    if (!fp) {
        perror("Cannot open file for writing");
        return;
    }
    fwrite(ph, sizeof(ph), 1, fp);
    fclose(fp);
}

void load() {
    FILE *fp = fopen("phone", "rb");
    if (!fp) {
        printf("No saved data found. Starting fresh.\n");
        return;
    }
    fread(ph, sizeof(ph), 1, fp);
    fclose(fp);
}

void search_name() {
    char nam[80];
    printf("Enter name to search: \n");
    fgets(nam, sizeof(nam), stdin);
    nam[strcspn(nam, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < MAX; i++) {
        if (!strcmp(nam, ph[i].name)) {
            display(ph[i]);
            found = 1;
        }
    }
    if (!found)
        printf("Not found.\n");
}

void search_number() {
    char numb[80];
    printf("Enter number to search: \n");
    fgets(numb, sizeof(numb), stdin);
    numb[strcspn(numb, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < MAX; i++) {
        if (!strcmp(numb, ph[i].num)) {
            display(ph[i]);
            found = 1;
        }
    }
    if (!found)
        printf("Not found.\n");
}
