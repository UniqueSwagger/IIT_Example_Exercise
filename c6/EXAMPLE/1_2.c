#include <stdio.h>
int main()
{
    int *p;
    double q,temp ;

    temp = 1234.43;
    p = &temp;
    q = *p;

    printf("%f", q);
    return 0;
}
