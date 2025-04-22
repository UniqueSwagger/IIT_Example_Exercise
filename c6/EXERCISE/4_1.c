// Write a program that creates three character pointers and 
// initialize them so that one points to the string "one", the second 
// to the string "two", and the third to the string "three" Next, have 
// the program print all six permutations of these three strings, 
// (For example, one permutation is "one two three', another is 
// "two one three".)

#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "one";
    char *str2 = "two";
    char *str3 = "three";

    printf("%s %s %s\n", str1, str2, str3);
    printf("%s %s %s\n", str1, str3, str2);
    printf("%s %s %s\n", str2, str1, str3);
    printf("%s %s %s\n", str2, str3, str1);
    printf("%s %s %s\n", str3, str1, str2);
    printf("%s %s %s\n", str3, str2, str1);

    return 0;
}