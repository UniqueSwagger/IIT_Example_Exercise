#include <stdio.h>
// Write a program that inputs two floating-point number5 (use type float)
// and then displays their sum. 
int main(void)
{
    float a, b;
    printf("Enter two float numbers: ");
    scanf("%f %f", &a, &b);

    printf("%f + %f = %f\n", a, b,a+b);
    return 0;
}