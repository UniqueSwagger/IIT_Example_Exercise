// Write a program that computes the area of either a circle, 
// rectangle, or triangle . Use an if-else-if ladder. 

#include <stdio.h>

int main(void) {
    int choice;
    float area, radius, length, width, base, height;

    printf("Enter 1 for circle, 2 for rectangle, 3 for triangle: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        area = 3.14159 * radius * radius;
        printf("Area of circle: %.2f\n", area);
    } else if (choice == 2) {
        printf("Enter length and width of rectangle: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("Area of rectangle: %.2f\n", area);
    } else if (choice == 3) {
        printf("Enter base and height of triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of triangle: %.2f\n", area);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}