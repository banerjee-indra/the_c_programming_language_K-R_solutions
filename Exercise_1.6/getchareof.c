#include <stdio.h>

/*this program shows what happens if we don't
 *evaluate operator precedence properly*/
int main(void)
{
	/*declare the local variable c*/
	int c;
	
	/*print the wrong value assigned to variable c*/
	printf("%d\n", c = getchar() != EOF);

	return 0;
}
