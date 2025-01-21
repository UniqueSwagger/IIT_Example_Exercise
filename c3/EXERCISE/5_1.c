// Write a program that coilVerts gallons to liters. Using a do loop, 
// allow the user to repeat the conversion. (One gallon is 
// approximately 3.7854 liters.)

#include <stdio.h>

int main(void) {
    float gallons, liters;
    char choice;

    do {
        printf("Enter gallons: ");
        scanf("%f", &gallons);

        liters = gallons * 3.7854;
        printf("Liters: %.2f\n", liters);

        printf("Do you want to convert another gallon? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y');

    return 0;
}