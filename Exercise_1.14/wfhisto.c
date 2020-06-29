#include <stdio.h>

/*number of printable characters in ASCII format*/
#define MAXCHAR 95
/*to save me the hassle of writing ' '*/
#define SPACE ' '

/*this program prints a histogram of frequencies of
 *different characters in its input*/
int main(void)
{
	/*declare variables and array*/
	int c, i, words[MAXCHAR];
	
	/*initialize the array*/
	for(i = 0; i < MAXCHAR - 1; ++i)
	{
		words[i] = 0;
	}
	
	/*accept input until EOF is received*/
	while((c = getchar()) != EOF)
	{
		/*input character - ' ' gives us the index of the
		 *input character in our array*/
		++words[c - SPACE];
	}
	
	/*print out the histogram*/
	printf("This is a histogram of the frequency of the characters in alphabatic order:\n");
	for(i = 0; i < MAXCHAR - 1; ++i)
	{
		/*print only if input exists*/
		if(words[i] > 0)
		{
			/*print the character first*/
			putchar(SPACE + i);
			/*then a SPACE!*/
			putchar(SPACE);
			/*then print the * character*/
			for(c = words[i]; c > 0; --c)
				putchar('*');
			/*a newline to separate*/
			putchar('\n');
		}
	}

	return 0;
}
