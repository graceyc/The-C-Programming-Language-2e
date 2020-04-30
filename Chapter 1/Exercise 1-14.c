/* Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>

#define TOTAL_CHAR 128  
/* Total Number of characters is 128: 
    [0-31]   control char
    [32-127] printable char */

/* count digits, white space, others */

int main()
{
    int c, i, j, _char[TOTAL_CHAR];

    for (i=0; i<128; ++i)
        _char[i] = 0;

    while ((c=getchar()) != EOF) 
        _char[c] += 1;

    for (i=0; i<TOTAL_CHAR; ++i)
    {
        putchar(i);
        putchar('\t');
        
        for (j=0; j < _char[i]; ++j)
            putchar('*');

        putchar('\n');
    }
}


