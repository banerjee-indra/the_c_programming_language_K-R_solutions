#include <stdio.h>

/*define the maximum number of words
 *in a line*/
#define MAXLINE 100

/*this program prints a histogram of lengths of
 *words in its input vertically*/
int main(void)
{
	/*declare variables and an array to hold
	 *wordwise lengths*/
	int c, words[MAXLINE], i, j;
	
	/*initialization*/
	for(i = 0; i < MAXLINE; ++i)
		words[i] = 0;
	i = j = 0;
	
	/*accept input until EOF is received*/
	while((c = getchar()) != EOF)
	{
		/*if a blankspace, a tab or a newline is received,
		 *a new word starts*/
		if(c == ' ' || c == '\t' || c == '\n')
		{
			/*if the length of the previous word exceeds
			 *the current maximum, update current maximum*/
			if(words[i] > j)
				j = words[i];
			++i;
		}
		/*else increment the length of the current word*/
		else
			++words[i];	
	}
	
	/*iterate maximum word length times*/
	for(i = j; i > 0; --i)
	{
		/*iterate over each word*/
		for(j = 0; j < MAXLINE && words[j] > 0; ++j)
		{
			/*if the length of the word greater than the
			 *current value of variable i, print a **/
			if(words[j] >= i)
				putchar('*');
			/*else leave a blankspace*/
			else
				putchar(' ');
		}
		/*newline marks the end of a row*/
		putchar('\n');
	}

	return 0;
}
