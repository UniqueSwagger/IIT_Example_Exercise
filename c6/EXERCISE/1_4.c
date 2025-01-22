// Write a program with a for loop that counts from 0 to 9, 
// displaying the numbers on the screen. Print the numbers 
// using a pointer. 

#include <stdio.h>

int main()
{
    int i;
    int *p;
    p = &i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *p);
    }
    return 0;
}