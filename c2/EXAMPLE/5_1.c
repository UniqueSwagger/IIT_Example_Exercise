#include <stdio.h>
int main()
{
    int ans, count;
    for (count = 1; count < 11; count++)
    {
        printf("What is %d + %d ? ", count, count);
        scanf("%d", &ans);

        if (ans == count * 2)
            printf("Right!\n");
        else 
            printf("Sorry, you're wrong. Answer is %d\n", count * 2);
    }

    return 0;
}
