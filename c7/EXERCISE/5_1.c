#include <stdio.h>
double f_to_m(double f);
int main(int argc, char const *argv[])
{
    double feet;
    printf("Enter feet: ");
    scanf("%lf", &feet);
    printf("Meter: %f", f_to_m(feet));
    return 0;
}
double f_to_m(double f){
    return f/3.28;
}