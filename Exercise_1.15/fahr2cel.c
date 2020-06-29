#include <stdio.h>

/*function prototype*/
float fahr2cel(int n);

/*this program prints the Fahrenheit - Celsius table
 *using a function for conversion*/
int main(void)
{
	/*variable declaration*/
	int fahr;

	/*prints the table for 0F to 300F with 20F stepping*/
	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		/*calls the function fahr2cel and prints the Celsius
		 *temperature*/
		printf("%3d %6.1f\n", fahr, fahr2cel(fahr));
	}

	return 0;
}

float fahr2cel(int fahr)
{
	return 5.0 / 9.0 * (fahr - 32.0);
}
