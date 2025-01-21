// How do you tell the C compiler that a floating-point constant 
// should be represented as a float instead of a double?

#include <stdio.h>

int main(void) {

    printf("%f ", 2309);
    printf("%lf", 2309.0);

    return 0;
}
