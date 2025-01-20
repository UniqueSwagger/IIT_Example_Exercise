#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;

    printf("Enter your message: \n");

    ch=getch();

    while(ch!='\r'){
        printf("%c",ch+1);
        ch=getch();
    }
    return 0;
}