// Assume that p is a float pointer that currently points to location 
// 100 and that floats are 4 bytes long. What is the value of p after 
// this fragment has executed? 
// p = p + 2; 

#include <stdio.h>

int main()
{
    float *p;
    p = (float *)100;
    printf("%p\n", p);
    p = p + 2;
    printf("%p", p);
    return 0;
}