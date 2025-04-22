#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int menu(void);
void display(int i);
void author_search(void);
void title_search(void);
void enter(void);
void save(void);
void load(void);
void trim_newline(char *str);

struct catalog {
    char name[80];
    char title[80];
    char pub[80];
    struct {
        int day;
        int month;
        int year;
    } date;
    unsigned char ed;
} cat[MAX];

int top = 0;

int main(void) {
    int choice;

    load(); // Load existing catalog if available

    do {
        choice = menu();
        switch (choice) {
            case 1: enter(); break;
            case 2: author_search(); break;
            case 3: title_search(); break;
            case 4: save(); break;
        }
    } while (choice != 5);

    return 0;
}

int menu(void) {
    int i;
    char str[80];

    printf("\nCard catalog:\n");
    printf("  1. Enter\n");
    printf("  2. Search by author\n");
    printf("  3. Search by title\n");
    printf("  4. Save catalog\n");
    printf("  5. Quit\n");

    do {
        printf("Choose your selection: ");
        fgets(str, sizeof(str), stdin);
        i = atoi(str);
    } while (i < 1 || i > 5);

    return i;
}

void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len && str[len - 1] == '\n') str[len - 1] = '\0';
}

void enter(void) {
    char temp[80];
    int i;

    for (i = top; i < MAX; i++) {
        printf("\nEnter author name (leave blank to stop): ");
        fgets(cat[i].name, sizeof(cat[i].name), stdin);
        trim_newline(cat[i].name);
        if (!*cat[i].name) break;

        printf("Enter title: ");
        fgets(cat[i].title, sizeof(cat[i].title), stdin);
        trim_newline(cat[i].title);

        printf("Enter publisher: ");
        fgets(cat[i].pub, sizeof(cat[i].pub), stdin);
        trim_newline(cat[i].pub);

        printf("Enter copyright date (dd/mm/yyyy): ");
        fgets(temp, sizeof(temp), stdin);
        sscanf(temp, "%d/%d/%d", &cat[i].date.day, &cat[i].date.month, &cat[i].date.year);

        printf("Enter edition: ");
        fgets(temp, sizeof(temp), stdin);
        cat[i].ed = (unsigned char) atoi(temp);
    }

    top = i;
}

void author_search(void) {
    char name[80];
    int i, found = 0;

    printf("Enter author name to search: ");
    fgets(name, sizeof(name), stdin);
    trim_newline(name);

    for (i = 0; i < top; i++) {
        if (strcmp(name, cat[i].name) == 0) {
            display(i);
            found = 1;
        }
    }

    if (!found) printf("Not found.\n");
}

void title_search(void) {
    char title[80];
    int i, found = 0;

    printf("Enter title to search: ");
    fgets(title, sizeof(title), stdin);
    trim_newline(title);

    for (i = 0; i < top; i++) {
        if (strcmp(title, cat[i].title) == 0) {
            display(i);
            found = 1;
        }
    }

    if (!found) printf("Not found.\n");
}

void display(int i) {
    printf("\nTitle: %s\n", cat[i].title);
    printf("Author: %s\n", cat[i].name);
    printf("Publisher: %s\n", cat[i].pub);
    printf("Copyright: %02d/%02d/%04d, Edition: %u\n",
           cat[i].date.day, cat[i].date.month, cat[i].date.year, cat[i].ed);
}

void load(void) {
    FILE *fp = fopen("catalog", "rb");
    if (!fp) {
        printf("No existing catalog found. Starting fresh.\n");
        return;
    }

    if (fread(&top, sizeof(top), 1, fp) != 1) {
        printf("Error reading catalog count.\n");
        fclose(fp);
        exit(1);
    }

    if (fread(cat, sizeof(cat[0]), top, fp) != (size_t)top) {
        printf("Error reading catalog data.\n");
        fclose(fp);
        exit(1);
    }

    fclose(fp);
}

void save(void) {
    FILE *fp = fopen("catalog", "wb");
    if (!fp) {
        printf("Cannot open catalog file.\n");
        exit(1);
    }

    if (fwrite(&top, sizeof(top), 1, fp) != 1) {
        printf("Error writing count.\n");
        fclose(fp);
        exit(1);
    }

    if (fwrite(cat, sizeof(cat[0]), top, fp) != (size_t)top) {
        printf("Error writing catalog data.\n");
        fclose(fp);
        exit(1);
    }

    fclose(fp);
    printf("Catalog saved successfully.\n");
}
