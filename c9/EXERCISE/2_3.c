// Write a program that copies the contents of one text file to 
// another. Have the program accept three command-line arguments. 
// The first is the name of the source file, the second is the name 
// of the destination file, the third is optional. If present and if it 
// equals 'watch," have the program display each character as it 
// copies the files; otherwise, do not have the program display any 
// screen output. If the destination file does not exist, create it. 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    FILE *src, *dest;
    char ch;
    int watch = 0;

    if(argc < 3 || argc > 4) {
        fprintf(stderr, "Usage: %s <source file> <destination file> [watch]\n", argv[0]);
        return 1;
    }

    if(argc == 4 && strcmp(argv[3], "watch") == 0) {
        watch = 1;
    }

    src = fopen(argv[1], "r");
    if(src == NULL) {
        fprintf(stderr, "Cannot open source file.\n");
        return 1;
    }

    dest = fopen(argv[2], "w");
    if(dest == NULL) {
        fclose(src);
        fprintf(stderr, "Cannot open destination file.\n");
        return 1;
    }

    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
        if(watch) {
            putchar(ch);
        }
    }

    fclose(src);
    fclose(dest);

    return 0;
}