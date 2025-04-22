// One of the best known examples of recursion is the recursive 
// version of.a function that computes the factorial of a number. 
// The factorial of a number is obtained by multiplying the original 
// number by all integers less than it and greater than 1. 
// Therefore, 4 factorial is 4x3x2, or 24. Write a function, called 
// fact( ), that uses recursion to compute the factorial of its 
// integer argument. Have it return the result. Also, demonstrate 
// its use in a program

#include <stdio.h>

int fact(int n); 


int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %d\n", number, fact(number));
    }

    return 0;
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * fact(n - 1); // Recursive case
    }
}