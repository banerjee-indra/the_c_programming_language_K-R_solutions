#include <stdio.h>

/*this program replaces tabs with \t,
 *backspaces with \b and \ with \\*/
int main(void)
{
	/*declare the variable to hold input*/
	int c;
	
	/*accept input until EOF is received*/
	while((c = getchar()) != EOF)
	{
		/*if input is a tab*/
		if(c == '\t')
			printf("\\t");
		/*if input is a backspace*/
		else if(c == '\b')
			printf("\\b");
		/*if input is a \*/
		else if(c == '\\')
			printf("\\\\");
		/*else print it as it is*/
		else
			putchar(c);
	}
	/*print a newline*/
	putchar('\n');

	return 0;
}
