// Write your own version of strcat( ) called mystrcat( ), and 
// write a short program that demonstrates it.

#include <stdio.h>
#include <string.h>

void mystrcat(char *to, char *from)
{
    while (*to) 
        to++;
    while (*from)
        *to++ = *from++;
    *to = '\0';
}

int main()
{
    char str1[80] = "Hello, ";
    char str2[] = "world!";
    
    mystrcat(str1, str2); 
    
    printf("%s\n", str1);
    
    return 0;
}