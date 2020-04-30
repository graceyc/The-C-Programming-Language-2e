/* Write a function reverse(s) that reverses the character string s. 
	Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

int _getline(char line[], int maxline);
void reverse(int len, char input[], char output[]);

/* print the longest input line */

int main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */
	char output[MAXLINE];	/* reverse line */


	while ((len = _getline(line, MAXLINE)) > 0)
	{
		reverse(len, line, output);

		for (int i=0; i<len; i++)
			printf("%c", output[i]);

		printf("\n\n");
	}

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
   
/* reverse:  reverse a string */
void reverse(int len, char input[], char output[])
{

	for(int i=0; i<len; i++)
		output[len-i-1] = input[i];
}


