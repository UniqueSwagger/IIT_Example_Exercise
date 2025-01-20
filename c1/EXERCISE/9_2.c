// Write a program that uses a function called outnum( ) that
// takes one integer argument and displays it on the screen. 

#include <stdio.h>

// prototype declare
void outnum(int num);

int main()
{
    outnum(1000);
}

void outnum(int num)
{
    printf("%d\n", num);
}
