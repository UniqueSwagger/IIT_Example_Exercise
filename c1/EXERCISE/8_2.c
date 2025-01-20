#include <stdio.h>
// Write a program that uses a function called convert( ), which
// prompts the user for an amount in dollars and returns this value
// converted into pounds. (Use an exchange rate of $2.00 per
// pound.) Display the conversion. 

// prototype declare
float convert(void);

int main()
{
    printf("The conversion is: %.2f\n", convert());
}

float convert(void)
{
    float dollars;
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollars);
    return dollars / 2.0;
}