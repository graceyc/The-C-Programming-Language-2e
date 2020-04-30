/* Write a program to print a histogram of the lengths of words in its input. 
    It is easy to draw the histogram with the bars horizontal; 
    a vertical orientation is more challenging. */

#include <stdio.h>

#define NONSPACE '-'

/* count digits, white space, others */

int main()
{
    int c, last_c;

    last_c = NONSPACE;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (last_c != ' ')
                putchar('\n');
        }

        else if (c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar('*');

        last_c = c;
    }
}


