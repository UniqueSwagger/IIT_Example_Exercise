// Write a program that reads anq writes a long int value.

#include<stdio.h>

int main(void) {
    long int li;
    printf("Enter a long int: ");
    scanf("%ld", &li);
    printf("You entered: %ld\n", li);
    return 0;
}