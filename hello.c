#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

int main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return 1;
}