#include <stdio.h>
#include <conio.h> 
int main()
{
    int i;
    char ch;
    ch = 'a';

    for (i = 0; ch != 'q'; i++)
    {
        printf("\nPass: %d\n", i);
        ch = getche();
    }

    return 0;
}
