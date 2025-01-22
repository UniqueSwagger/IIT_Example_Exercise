#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char str[50] = "Shohidur Rahman";
    char *p;
    p = str;
    while (*p++)
    {
        *p = toupper(*p);
    }
    printf("%s", str);
    p = str;

    printf("\n");
    while (*p++)
    {
        *p = tolower(*p);
    }
    printf("%s\n", str);
    return 0;
}
