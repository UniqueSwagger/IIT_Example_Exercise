// Write a program that uses fgets( ) to display the contents of a 
// text file , one screenful at a time. After each screen is displayed, 
// have the program prompt the user for more.

#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
    char str[80];
    FILE *fp;

    fp = fopen(argv[1], "r");
    int cnt = 0;
    while(!feof(fp)) {
        fgets(str, sizeof(str), fp);
        printf("%s", str);
        cnt++;
        if(cnt == 23) {
            printf("More? (y/n)");
            gets(str);
            if(toupper(*str) == 'N') break;
            cnt = 0;
        }
    }
    fclose(fp);
    return 0;
}