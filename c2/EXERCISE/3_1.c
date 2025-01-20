#include <stdio.h>
// Write a program that either adds or subtracts two integers. First,
// prompt the user to choose an operation; then prompt for the
// two numbers and display the result. 


int main(void) {
    int num1, num2;
    char operation;
    printf("Enter 'a' to add or 's' to subtract: ");
    scanf(" %c", &operation);
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (operation == 'a') {
        printf("The sum of %d and %d is %d.\n", num1, num2, num1 + num2);
    } else if (operation == 's') {
        printf("The difference of %d and %d is %d.\n", num1, num2, num1 - num2);
    } else {
        printf("Invalid operation.\n");
    }
    return 0;
}