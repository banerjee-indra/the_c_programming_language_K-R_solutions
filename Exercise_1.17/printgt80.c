#include <stdio.h>

/*define maximum number of characters in a line*/
#define MAXLINE 1000

/*function prototype*/
int readline(char s[], int lim);

/*this program prints lines which have more than
 *80 characters*/
int main(void)
{
	/*declare character array to hold input*/
	char line[MAXLINE];
	/*declare integer variable to hold line length*/
	int len;
	
	/*accept input until an empty line is received*/
	while((len = readline(line,MAXLINE)) > 0)
	{
		/*if length of line > 80, print*/
		if(len > 80)
		{
			printf("%s", line);
			/*if the line doesn't end with a newline, add a newline*/
			if(line[len - 1] != '\n')
				putchar('\n');
		}
	}

	return 0;
}

/*read line from user input and return*/
int readline(char s[], int lim)
{
	/*declare variables to hold the length of a line and
	 *the input character*/
	int len, c;
	
	/*store input characters until EOF or newline is received or limit has been reached*/
	for(len = 0; len < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++len)
		s[len] = c;
	
	/*if last character was a newline*/
	if(c == '\n')
	{
		s[len] = '\n';
		++len;
	}
	
	/*add a NULL to the end to denote end of string*/
	s[len] = '\0';

	return len;
}
