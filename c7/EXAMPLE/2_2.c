#include <stdio.h>
void rcopy(char *s1, char *s2) {
    if(*s2) {
        *s1++ = *s2++;
        rcopy(s1,s2);
    }
    else {
        *s1 = '\0';
    }
}
int main(int argc, char const *argv[])
{
    char str[50];
    rcopy(str,"Hello World!");
    printf("%s", str);
    return 0;
}