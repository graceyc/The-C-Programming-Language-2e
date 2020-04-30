/* Modify the temperature conversion program to print a heading above the table. */

#include <stdio.h>

/* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */

int main()
{
	int fahr, celsius;
    int lower, upper, step;

    /* lower limit of temperature scale */
	/* upper limit */
	/* step size */
	lower = 0;
	upper = 300;
	step = 20;

	printf("Temperature Conversion\n");
    printf("  C   F\n");

    fahr = lower;
    while (fahr <= upper) 
    {
    	celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%3d\n", fahr, celsius);
        fahr = fahr + step;
     }
}
