#include <stdio.h>
void recurse(int i);
int main(int argc, char const *argv[])
{
    recurse(0);
    return 0;
}
void recurse(int i) {
    if(i<10) {
        recurse(i+1);
        printf("%d ", i);
    }
}