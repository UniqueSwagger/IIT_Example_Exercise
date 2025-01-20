#include <stdio.h>
#include <conio.h>
int main(void)
{
    char ch;
    for(ch=getche(); ch!='q'; ch=getche());
    printf("\nFound the q\n");
    return 0;
} 