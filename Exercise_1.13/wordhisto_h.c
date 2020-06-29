#include <stdio.h>

/*define the maximum number of words
 *in a line*/
#define MAXLINE 100

/*this program prints a histogram of lengths of
 *words in its input horizontally*/
int main(void)
{
	/*declare variables and an array to hold 
	 *wordwise lengths*/
	int c, words[MAXLINE], i;
	
	/*initialization*/
	for(i = 0; i < MAXLINE; ++i)
		words[i] = 0;
	i = 0;
	
	/*accept input until EOF is received*/
	while((c = getchar()) != EOF)
	{
		/*if a blankspace, a tab or a newline is received,
		 *a new word starts*/
		if(c == ' ' || c == '\t' || c == '\n')
			++i;
		/*else increment the length of the word*/
		else
			++words[i];	
	}
	
	/*iterate over each word*/
	for(i = 0; i < MAXLINE && words[i] > 0; ++i)
	{
		/*assign word length to c*/
		c = words[i];
		/*print * the word's length times*/
		while(c > 0)
		{
			putchar('*');
			--c;
		}
		/*newline after every horizontal column*/
		putchar('\n');
	}

	return 0;
}
