// Show the prototype for a function called Purge( ) that has no 
// parameters and returns a pointer to a double.

#include <stdio.h>
double *Purge();
double x = 100;
int main(int argc, char const *argv[])
{

    printf("%p\n", &x);
    printf("%p", Purge());
    return 0;
}

double *Purge()
{
    return &x;
}