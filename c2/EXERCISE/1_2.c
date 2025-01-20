#include <stdio.h>
// Write a program that asks the user for an integer and then tells
// the user if that number is even or odd. (Hint, use Cs modulus
// operator' %.)

int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}