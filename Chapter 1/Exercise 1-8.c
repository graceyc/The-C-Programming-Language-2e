/* Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main()
{
	int c, num_spaces, num_tabs, num_newlines;

	num_spaces   = 0;
	num_tabs     = 0;
	num_newlines = 0;

	while ((c = getchar()) != EOF)
		if (c == ' ')
			++num_spaces;
		else if (c == '\t')
			++num_tabs;
		else if (c == '\n')
			++num_newlines;

    printf("space: %d\ntab: %d\nnew line: %d\n", num_spaces, num_tabs, num_newlines);
}