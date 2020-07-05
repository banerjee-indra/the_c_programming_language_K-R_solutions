#include <stdio.h>

#define MAXLINE 1000
#define SPACE ' '
#define TAB '\t'

/*function prototyping*/
int readline(char s[], int lim);

/*this program writes input to the output removing
 *trailing blanks and tabs*/
int main(void)
{
    /*declare array to hold the input line, length of line*/
	char line[MAXLINE];
	int len;

    /*while EOF is not received*/
	while((len = readline(line,MAXLINE)) > -1)
	{
		if(len > 0)
		{
			printf("%s",line);
		}
	}

	return 0;
}

/*reads the input buffer and returns length*/
int readline(char s[], int lim)
{
    /*declare variables to hold input and length*/
	int c, len;
    
    /*accept input until limit is reached/ EOF is received/ newline is received*/
	for(len = 0; len < lim-2 && (c = getchar()) != EOF && c != '\n'; ++len)
		s[len] = c;
	
    /*if EOF then send terminate signal*/
	if(c == EOF)
		len = -1;
    /*if it is a blank line*/
	else if(c == '\n' && len == 0)
	{
		s[len] = '\n';
		++len;
	}
    
    /*removing the trailing blanks and tabs*/
	for(--len; len > -1; --len)
	{
		if(s[len] != SPACE && s[len] != TAB)
			break;
	}
    
    /*if not EOF*/
	if(len > -1)
	{
        /*if newline already not present*/
		if(s[len] != '\n')
		{
			++len;
			s[len] = '\n';
		}
        /*NULL to denote end of string*/
		++len;
		s[len] = '\0';
	}
    
    /*return length*/
	return len;
}
