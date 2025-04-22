#include<stdio.h>

struct s_type{
    int i;
    char ch;
    int *p;
    double d;
};

int main() {
    printf("%ld bytes\n", sizeof(struct s_type));
}