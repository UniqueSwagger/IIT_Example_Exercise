#include <stdio.h>
// A program with two functions
void func1(void); /* prototype for func1()*/

int main(void)
{
    printf("I ");
    func1();
    printf("C.");
}

void func1(void)
{
    printf("like ");
}