#include <stdio.h>
// Write a program that contains at least two functions and prints
// the message The summer soldier, the sunshine patriot. 
// prototype declare
void func1(void);
void func2(void);

int main()
{

    func1();
}

void func1(void)
{
    printf("The summer soldier, ");
    func2();
}

void func2(void)
{
    printf("the sunshine patriot.");
}