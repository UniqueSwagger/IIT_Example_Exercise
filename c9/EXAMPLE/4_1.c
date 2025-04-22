#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
    FILE *fp;
    char str[80];

    fp = fopen(argv[1], "w");
    printf("Enter a blank line to terminate.\n");

    do{
        printf("> ");
        gets(str);
        strcat(str, "\n");
        if(*str != '\n') {
            fputs(str, fp);
        }
    } while(*str != '\n');
    fclose(fp);

    fp = fopen(argv[1], "r");

    do{
        fgets(str, 79, fp);
        if(!feof(fp)) printf(str);
    } while(!feof(fp));
    fclose(fp);
}