// Write a program that inputs a string. Have the program look for 
// the first space. If it finds one. print the remainder of the string. 

#include <stdio.h>

int main()
{
    char str[50];
    char *p;
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    p = str;
    while (*p)
    {
        if (*p == ' ')
        {
            i++;
            p++;
            printf("%s", p);
            break;
        }
        p++;
    }
    if (i == 0)
    {
        printf("No space found in the string.");
    }
    return 0;
}
