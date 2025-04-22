// Write a program that creates a structure that contains three 
// bit-fields called a, b, and c. Make a and b three bits long and 
// make c two bits long. Next, assign each a value and display the 
// values.

#include <stdio.h>

// Define a structure with bit-fields
struct BitFields {
    unsigned int a : 3; // 3 bits for 'a'
    unsigned int b : 3; // 3 bits for 'b'
    unsigned int c : 2; // 2 bits for 'c'
};

int main() {
    struct BitFields bf;

    bf.a = 5; 
    bf.b = 3; 
    bf.c = 2; 

    printf("a = %u\n", bf.a);
    printf("b = %u\n", bf.b);
    printf("c = %u\n", bf.c);

    return 0;
}
