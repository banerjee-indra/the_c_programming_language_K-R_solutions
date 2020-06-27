#include <stdio.h>

/*this program replaces multiple spaces with a single space*/
int main(void)
{
    /*declare the variables*/
	int c, nb;
    
    /*initialize the counter*/
	nb = 0;
    
    /*accept input until EOF is received*/
	while((c = getchar()) != EOF)
	{
        /*if input is any other character than blank space*/
		if(c != ' ')
		{
			putchar(c);
            /*blank space counter is initialized*/
			nb = 0;
		}
        /*if input is a blank space and the blank space
         *counter is set to 0*/
		else if(c == ' ' && nb == 0)
		{
			putchar(c);
            /*increment the blank space counter to restrict
             *further prints*/
			++nb;
		}
	}
    /*a blank space for neat & tidy output*/
	c = '\n';
	putchar(c);

	return 0;
}
