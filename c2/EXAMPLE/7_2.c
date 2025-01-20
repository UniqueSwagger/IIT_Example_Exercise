#include <stdio.h>

int xor (int a, int b) {
    return (a && !b) || (!a && b);
} 

int main()
{
    int p, q;
    printf("Enter 0 or 1 => (p) : ");
    scanf("%d", &p);
    printf("Enter 0 or 1 => (q) : ");
    scanf("%d", &q);

    printf("P AND Q = %d\n", p && q);
    printf("P OR Q = %d\n", p || q);
    printf("P XOR Q = %d", xor(p, q));

    return 0;
}
