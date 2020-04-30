/* Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

/* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    /* lower limit of temperature scale */
    /* upper limit */
    /* step size */
    lower = 0;
    upper = 300;
    step  = 20;

    printf("Temperature Conversion\n");
    printf("  C\t    F\n");

    fahr = lower;
    while (fahr <= upper) 
    {
        celsius = 5.0 * (fahr - 32.0) / 9;
        printf("%3.f\t%5.1f\n", fahr, celsius);
        fahr = fahr + step;
     }
}
