#include <stdio.h>

/*this program prints the number of blanks,
 *number of tabs and number of newlines in
 *the input*/
int main(void)
{
	/*declare variables of type int; nb will hold number of blanks
	 *nt will hold number of tabs, nl will hold number of newlines,
	 *and c will hold the next input character*/
	int nb, nt, nl, c;

	/*let's initialize the variables*/
	nb = nt = nl = c = 0;
	
	/*while loop to capture the input until EOF is received*/
	while((c = getchar()) != EOF)
	{
		/*if c contains a blank space*/
		if(c == ' ')
			++nb;
		/*if c contains a tab*/
		else if(c == '\t')
			++nt;
		/*if c contains a newline*/
		else if(c == '\n')
			++nl;
	}
	
	/*print the count one by one*/
	printf("Number of blanks: %d\n", nb);
	printf("Number of tabs: %d\n", nt);
	printf("Number of newlines: %d\n", nl);

	return 0;
}
