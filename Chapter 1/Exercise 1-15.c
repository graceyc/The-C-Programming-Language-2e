/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>

/* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */

int FahrToCelsius(int fahr)
{
	int celsius = 0;
	celsius = 5 * (fahr-32) / 9;
	return celsius;
}

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
	upper = 300;
	step  = 20;
	/* lower limit of temperature scale */
	/* upper limit */
	/* step size */

	fahr = lower;

    while (fahr <= upper) {
        printf("%3d\t%5d\n", fahr, FahrToCelsius(fahr));
        fahr = fahr + step;
	}
}


