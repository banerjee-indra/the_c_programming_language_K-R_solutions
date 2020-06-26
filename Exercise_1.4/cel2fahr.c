#include <stdio.h>

/*this program converts temperature in Celsius to Fahrenheit 
 * from 0C to 300C*/
int main(void)
{
	/*declare the local variables, using float for precision*/
	float fahr, celsius;
	float lower, upper, step;
	
	/*initializing the variables*/
	lower = 0; /*lower limit of the temperature scale*/
	upper = 300; /*upper limit*/
	step = 20; /*step size*/
	
	/*starting from 0C*/
	celsius = lower;
	
	/*prints the heading*/
	printf("C\tF\n");

	/*actual conversion starts from here*/
	while(celsius <= upper)
	{
		fahr = 9.0 * celsius / 5.0 + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
	        celsius = celsius + step;
	}

	return 0;
}
