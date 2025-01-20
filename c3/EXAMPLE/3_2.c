#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    for (; i; i--)
        printf("%d ", i);

    return 0;
}
