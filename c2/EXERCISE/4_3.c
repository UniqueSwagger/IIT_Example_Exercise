#include <stdio.h>
//  Write a program similar to the prime-number tester, except that
// it displays all the factors of a number entered by the user. For
// example, if the user entered 8, it would respond with 2 and 4


int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}