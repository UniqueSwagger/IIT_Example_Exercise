#include<stdio.h>

int main(){
    if(rename("myfile", "myfile2") == 0){
        printf("File renamed successfully.\n");
    } else {
        printf("Error renaming file.\n");
    }
    return 0;
}