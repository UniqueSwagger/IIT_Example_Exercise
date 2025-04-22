#include<stdio.h>

union u_type {
    long l;
    int i;
}var;

int main() {
    var.l = 0L;
    var.i = 10000000;

    printf("%ld", var.l);
}