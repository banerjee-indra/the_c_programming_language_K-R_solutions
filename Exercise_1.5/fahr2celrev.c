#include <stdio.h>

/*this program converts temperature from Fahrenheit to Celsius,
 *from 300F to 0F*/
int main(void)
{
	/*declare the fahrenheit variable*/
	int fahr;
	
	/*construct the conversion routine using a for loop
	 *starts from 300F and gradually comes down to 0F,
	 *decrementing 20F each iteration*/
	for(fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr,(5.0 / 9.0) * (fahr - 32.0));

	return 0;
}
