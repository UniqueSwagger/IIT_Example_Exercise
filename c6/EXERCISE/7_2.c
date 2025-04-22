// Write a program that passes a pointer to an integer variable to a 
// function. Inside that function, assign the variable the value -1. 
// After the function has returned, demonstrate that the variable 
// does, indeed, contain -1 by printing its value.

#include <stdio.h>

void assignValue(int *p);


int main() {
    int num = 0; 

    printf("Before function call: %d\n", num);

    assignValue(&num); 

    printf("After function call: %d\n", num); 

    return 0; 
}

void assignValue(int *p) { 
    *p = -1; 
} 

