#include <stdio.h>

/*define the maximum length of input*/
#define MAXLINE 1000

/*function prototypes*/
int readline(char s[], int lim);
void reverse(char s[]);

/*this program reverses the input string*/
int main(void)
{
	/*declare a character array to hold the input line
	 *& an int variable to hold the length*/
	char line[MAXLINE];
	int len;
	
	/*while EOF is not received*/
	while((len = readline(line,MAXLINE)) > 0)
	{
		/*reverse the input string*/
		reverse(line);
		/*print the string*/
		printf("%s\n", line);
	}

	return 0;
}

/*read the input line by line*/
int readline(char s[], int lim)
{
	/*declare int variables to hold input character &
	 *length of the input*/
	int c, len;

	for(len = 0; len < lim - 2 && (c = getchar()) != EOF && c != '\n'; ++len)
		s[len] = c;
	
	/*append NULL at the end to denote end of string*/
	s[len] = '\0';
	
	/*return length*/
	return len;
}

/*reverse the supplied string*/
void reverse(char s[])
{
	/*declare variables*/
	int i,j,flag = 0;
	char revs[MAXLINE];
	
	/*start iterating over the string from the end*/
	for(i = MAXLINE - 1; i >= 0; --i)
	{
		/*if NULL or EOS is found that means start of string
		 *set flag to 1 and counter j to 0*/
		if(s[i] == '\0')
		{
			flag = 1;
			j = 0;
		}
		/*if flag is 1 then append characters to the temporary
		 *character array*/
		else if(flag == 1)
		{
			revs[j] = s[i];
			++j;
		}	
	}
	/*append EOS*/
	revs[j] = '\0';
	
	/*iterate over the reversed string array and copy its
	 *content to the supplied array*/
	i = 0;
	while((s[i] = revs[i]) != '\0')
		++i;
}
