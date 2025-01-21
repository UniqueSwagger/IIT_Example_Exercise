// Write a program that displays the menu below and uses a do 
// loop to check for valid responses. (Your program does not need 
// to implement the actual functions shown in the menu.) 
// Mailing list menu: 
// 1. Enter addresses 
// 2. Delete address 
// 3. Search the list 
// 4. Print the list 
// 5. Quit 
// Enter the number of your choice (1-5). 

#include <stdio.h>

int main(void) {
    int choice;

    do {
        printf("Mailing list menu:\n");
        printf("1. Enter addresses\n");
        printf("2. Delete address\n");
        printf("3. Search the list\n");
        printf("4. Print the list\n");
        printf("5. Quit\n");
        printf("Enter the number of your choice (1-5): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5) {
            printf("Invalid choice\n");
        }
    } while (choice < 1 || choice > 5);

    return 0;
}