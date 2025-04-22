#include<stdio.h>
#include<string.h>
int main() {
    char str[80];
    int i;
    printf("Enter a string: \n");

    fgets(str, 10, stdin);

    i = strlen(str) - 1;
    if(str[i] == '\n') str[i] = '\0';

    printf("%s", str);
}