/* Write a program to copy its input to its output, 
	replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

#define NONSPACE '-'

int main()
{
	int c, last_c;

	last_c = NONSPACE;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (last_c != ' ')
				putchar(c);
		}
		else
			putchar(c);

		last_c = c;
	}
}