#include <stdio.h>
int main()
{
    char text[][80] = {
        "Hund",
        "nein",
        "Jahr",
        "Kind",
        "Ich",
        "fahren",
        "Haus",
        "zu",
        "",
    };

    int i, j;

    // now display the name
    for (i = 0; text[i][0]; i++)
    {
        for (j = 0; text[i][j]; j++)
        {
            printf("%c", text[i][j], j);
        }
        printf("\t%s%02d\n", "--> 15", i + 1);
    }

    return 0;
}
