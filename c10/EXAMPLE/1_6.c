#include<stdio.h>

struct s_type
{
    int i;
    double d;
};

struct s_type f(void);

int main(void) {
    struct s_type var1;
    var1 = f();
    printf("%d %f\n", var1.i, var1.d);

    return 0;
}

struct s_type f(void)
{
    struct s_type temp;
    temp.i = 100;
    temp.d = 100.23;

    return temp;
};
