#include <stdio.h>

/*define the maximum length of line we are expecting*/
#define MAXLINE 11

/*function prototyping*/
int readline(char s[], int lim);
void copy(char to[], char from[]);

/*this program calculates the length of the longest line
 *and prints as much as possible*/
int main(void)
{
	/*two character arrays for holding current line
	 *and longest line*/
	char line[MAXLINE], longest[MAXLINE];
	/*two integer variables to hold length of current
	 *line and length of longest line*/
	int len, max;
	
	/*continue evaluating until a blank line is received*/
	while((len = readline(line, MAXLINE)) > 0)
	{
		/*if length of current line GT longest line so far,
		 *replace longest line's length by current line's
		 *replace the string also*/
		if(len > max)
		{
			max = len;
			copy(longest,line);
		}
	}
	
	/*if a longest line exists then print*/
	if(max > 0)
		printf("Length of longest line: %d, printable length: %d\n%s\n", max, MAXLINE - 1, longest);

	return 0;
}

/*read line user input and fill the character array upto the limit,
 *increment the length and return*/
int readline(char s[], int lim)
{
	int c, len;
	
	/*accept input until an NL or EOF is received*/
	for(len = 0; (c = getchar()) != EOF && c != '\n'; ++len)
	{
		/*if within limit then copy the character to the array*/
		if(len < lim - 1)
			s[len] = c;

	}
	
	/*if the last character was a newline*/
	if(c == '\n')
	{
		/*if length within limit*/
		if(len < lim - 1)
		{
			s[len] = '\n';
			++len;
		}
		/*else just increment the length*/
		else
			++len;
	}
	
	/*if length within limit*/
	if(len < lim - 1)
		s[len] = '\0';
	/*else just place NULL at the tail*/
	else
		s[lim - 1] = '\0';


	return len;
}

/*copy a string to another*/
void copy(char to[], char from[])
{
	int i = 0;
	/*until NULL is received perform copy*/
	while((to[i] = from[i]) != '\0')
		++i;
}
