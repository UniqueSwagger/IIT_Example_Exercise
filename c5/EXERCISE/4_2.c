#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Tom"; // not correct , have to use char name[80] = "Tom";
    strcpy(name, "Tom Brazwell");
}