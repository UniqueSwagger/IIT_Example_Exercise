// Even if a for loop uses a loop·control variable , it need not he 
// incremented or decremented by a fixed amount. Instead, the 
// amount added or subtracted may vary. Write a program that 
// begins at 1 and runs to 1000. Have the program add the 
// loop-control variable to itself inside the increment expression. 
// This is an easy way to produce the arithmetic progression 1 2 4 
// 8 16, and so on

#include <stdio.h>

int main(void) {
    int i, sum;

    for (i = 1, sum = 1; i <= 1000; i += i) {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}