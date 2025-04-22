#include<stdio.h>

short encode(short i);
int main() {
    short i;
    i = encode(10);
    printf("10 is encoded to %d\n", i);
    i = encode(i);
    printf("%d is decoded to %d\n", encode(i), i);
    return 0;
}

short encode(short i) {
    union crypt_type{
        short num;
        char c[2];
    }crypt;
    unsigned char ch;
    crypt.num = i;

    ch = crypt.c[0];
    crypt.c[0] = crypt.c[1];
    crypt.c[1] = ch;

    return crypt.num;
}