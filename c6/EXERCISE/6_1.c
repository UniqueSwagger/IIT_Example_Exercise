// To help you understand multiple indirection better, write a 
// program that assigns an integer a value using a pointer to a 
// pointer. Before the program ends, display the addresses of the 
// integer variable, the pointer, and the pointer to the pointer. 
// (Remember, use %p to display a pointer value.) 


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *p, **mp, i;

    p = &i;
    mp = &p;

    **mp = 1000;

    printf("Value of i: %d\n", i);
    printf("Address of i: %p\n", &i);
    printf("Address of p: %p\n", &p);
    printf("Address of mp: %p\n", &mp);

    return 0;
}