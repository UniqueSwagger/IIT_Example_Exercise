#include<stdio.h>
#include<stdlib.h>

struct telemetry {
    char fuel;
    char radio;
    char tv;
    char water;
    char food;
    char waste;
}flt_recd;

void display(struct telemetry i);

int main() {
    FILE *fp;
    int i;

    if((fp = fopen("flight", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    for(int i = 0 ; i < 100 ; i++) {
        flt_recd.fuel = rand()%2;
        flt_recd.food = rand()%2;
        flt_recd.radio = rand()%2;
        flt_recd.tv = rand()%2;
        flt_recd.water = rand()%2;
        flt_recd.waste = rand()%2;
        display(flt_recd);
        fwrite(&flt_recd, sizeof flt_recd, 1, fp);
    }
    fclose(fp);
}

void display(struct telemetry i) {
    if(i.fuel) printf("Fuel OK\n");
    else printf("Fuel low\n");
    if(i.radio) printf("Radio OK\n");
    else printf("Radio failure\n");
    if(i.tv) printf("TV system OK\n");
    else printf("TV malfunction\n");
    if(i.water) printf("Water supply OK\n");
    else printf("Water supply down\n");
    if(i.waste) printf("Water containment OK\n");
    else printf("Water containment failure\n");
    printf("\n");
} 