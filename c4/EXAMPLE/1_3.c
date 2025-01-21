#include <stdio.h>
int main()
{
    int i;
    char j;
    i = 0;
    for (int j = 0; j < 101; j++)
    {
        i=j+1;
    }
    printf("Total is : %d\n", i);
}