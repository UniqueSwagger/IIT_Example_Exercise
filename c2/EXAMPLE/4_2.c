#include <stdio.h>
// prime number test
int main(void)
{
    int num, i, isPrime;
    printf("Enter a number: ");
    scanf("%d", &num);

    isPrime = 1;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime == 1)
        printf("It is prime");
    else
        printf("It is not prime");
    return 0;
}
