// correct code:

#include <stdio.h>

double myfunc(double);

int main(void)
{
    printf("%f\n", myfunc(10.2));
    return 0;
}

double myfunc(double num)
{
    return num / 2.0;
}
