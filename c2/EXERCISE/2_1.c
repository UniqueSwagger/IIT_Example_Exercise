#include <stdio.h>
// Write a program that requests two numbers and then displays
// either their sum or product, depending on what the user selects.


int main(void) {
    int num1, num2;
    char operation;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter 's' to sum or 'p' to multiply: ");
    scanf(" %c", &operation);
    if (operation == 's') {
        printf("The sum of %d and %d is %d.\n", num1, num2, num1 + num2);
    } else if (operation == 'p') {
        printf("The product of %d and %d is %d.\n", num1, num2, num1 * num2);
    } else {
        printf("Invalid operation.\n");
    }
    return 0;
}