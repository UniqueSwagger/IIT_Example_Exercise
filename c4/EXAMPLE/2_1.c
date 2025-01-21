#include<stdio.h>

void f1(void);

int count; /*global count*/

int main(void) {
    count = 10;
    f1();
    printf("count in main(): %d\n", count);

    return 0;    
}

void f1(void) {
    int count; /* local count */

    //if local variable was not declared then count in both functions would have been 100

    count = 100;
    printf("count in f1(): %d\n", count);
}