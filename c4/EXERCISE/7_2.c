#include <stdio.h>
int main()
{
    float x, a, b;
    a = 123.23;
    b = 3;
    x = (int)(a * 100) % (int)(b * 100);
    printf("%f", x);
    return 0;
}
