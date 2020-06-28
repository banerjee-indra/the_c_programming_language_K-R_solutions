#include <stdio.h>

/*this program prints input one word per line*/
int main(void)
{
	/*declare variable c for holding input character*/
	int c;
	
	/*accept input until EOF is received*/
	while((c = getchar()) != EOF)
	{
		/*if input is blankspace or tab, print a newline instead*/
		if(c == ' ' || c == '\t')
			putchar('\n');
		/*anything other than that? print as it is*/
		else
			putchar(c);
	}

	return 0;
}
