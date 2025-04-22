#include<stdio.h>
struct b_type
{
    unsigned first: 1;
    int x: 32;
    unsigned last: 1;
    int a;
    int b;
    int c;
    int d;
} hello;

int main() {
    printf("%ld", sizeof hello);
}