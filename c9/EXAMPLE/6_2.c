#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    long loc;
    FILE *in, *out;
    in = fopen(argv[1], "rb");
    out = fopen(argv[2], "wb");
    fseek(in, 0L, SEEK_END);
    loc = ftell(in);

    loc = loc - 1;

    while(loc >= 0L) {
        fseek(in, loc, SEEK_SET);
        char ch = fgetc(in);
        fputc(ch, out);
        loc--;
    }
    fclose(in);
    fclose(out);
}