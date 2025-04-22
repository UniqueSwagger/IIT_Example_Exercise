#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
    char fname[80];

    gets(fname);
    printf("Are u sure? (y/n)");
    if((toupper(getchar()) == 'Y')) remove(fname);

    return 0;
}