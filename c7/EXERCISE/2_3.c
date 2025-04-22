// Write a program that displays a string on the screen, one 
// character at a time, using a recursive function.

#include <stdio.h>
void displayString(char *str){
    if(*str){
        printf("%c", *str); 
        displayString(str+1);
    }
}
int main(){
    printf("Enter a string: ");
    char str[100];
    fgets(str, sizeof(str), stdin);
    displayString(str);
    printf("\n");
}
