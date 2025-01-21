// Write a program that gives an integer variable called i an initial 
// value of 100 and then uses i to control a for loop that displays 
// the numbers 100 down to 1. 

#include<stdio.h>

int main(void) {
    int i;
    i = 100;
    for( ; i>0; i--) {
        printf("%d\n", i);
    }
    return 0;
}