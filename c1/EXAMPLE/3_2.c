#include <stdio.h>
int main(void)
{
    char ch;
    float f;
    double d;

    ch = 'X';
    f = 100.123;
    d = 123.009;

    printf("ch is %c\n", ch);
    printf("f is float %f\n", f);
    printf("d is %lf\n", d);

    return 0;
}