// Write a program that exchanges the contents of the two files 
// whose names are specified on the command line. That IS, given 
// two files called FILE! and FlLE2, after the program has run, 
// F!LE! will contain the contents that originally were in FlLE2, 
// and FILE2 will contain FILE! 's original contents. (Hint: Use a 
// temporary file to aid in the exchange process.) 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp1, *fp2, *temp_fp;
    char ch;
    if(argc != 3) {
        fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }
    if((fp1 = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Cannot open file %s.\n", argv[1]);
        return 1;
    }
    if((fp2 = fopen(argv[2], "rb")) == NULL) {
        fclose(fp1);
        fprintf(stderr, "Cannot open file %s.\n", argv[2]);
        return 1;
    }
    if((temp_fp = tmpfile()) == NULL) {
        fclose(fp1);
        fclose(fp2);
        fprintf(stderr, "Cannot create temporary file.\n");
        return 1;
    }
    
    // Copy contents of file 1 to temporary file
    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, temp_fp);
    }
    
    // Copy contents of file 2 to file 1
    rewind(fp2); // Move pointer to the beginning of file 2
    while((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp1);
    }
    
    // Copy contents of temporary file to file 2
    rewind(temp_fp); // Move pointer to the beginning of temporary file
    while((ch = fgetc(temp_fp)) != EOF) {
        fputc(ch, fp2);
    }
    
    fclose(fp1);
    fclose(fp2);
    fclose(temp_fp);
    
    printf("Files exchanged successfully.\n");
    
    return 0;
}