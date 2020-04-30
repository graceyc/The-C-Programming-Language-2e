/* Write a program to print all input lines that are longer than 80 characters. */

#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

int _getline(char line[], int maxline);
void copy(char to[], char from[]);
void store(char to[], char from[], int cur_store_len, int len);

/* print the longest input line */

int main()
{
	int len;				/* current line length */
	int cur_store_len;      /* current store length */
	int max = 80;			/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];	/* lines are longer than 80 characters saved here */

	cur_store_len = 0; 

	while ((len = _getline(line, MAXLINE)) > 0)
	{
	    if (len >= max)
	    {
	        store(longest, line, cur_store_len, len);
	        cur_store_len += len;
	    }
	}

	printf("\n\n\nLines:\n%s", longest);

	return 0; 
}

/* getline:  read a line into s, return length  */
int _getline(char s[], int lim)
{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;

	if (c == '\n') 
	{
		s[i] = c;
		++i; 
	}

	s[i] = '\0';
	return i; 
}
   
/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
    i = 0;

    while ((to[i] = from[i]) != '\0')
		++i; 
}

/* store:  store */
void store(char to[], char from[], int cur_store_len, int len)
{
	int i;

    for (i=0; i<len; i++)
    	to[cur_store_len + i] = from[i];
}