#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    char ch;

    printf("Do you want to: \n");
    printf("Add, Sub,Mul, or Divide?\n");

    do
    {
        printf("\nEnter first letter: \n");
        ch = getche();

    } while (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');
    printf("\n");

    printf("Enter first num: ");
    scanf("%d", &a);
    printf("Enter second num: ");
    scanf("%d", &b);

    if (ch == 'A')
        printf("%d", a + b);
    else if (ch == 'S')
        printf("%d", a - b);
    else if (ch == 'M')
        printf("%d", a * b);
    else if (ch == 'D' && b != 0)
        printf("%d", a / b);

    return 0;
}
