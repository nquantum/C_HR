/* 	Exercise 1-15 use function for temp convert */

#include <stdio.h>

#define UPPER	300
#define STEP	20

float conv(int fahr);

int main()
{
	int i;

	for (i = 0; i <= UPPER; i = i + STEP)	
/*		(printf("%d\n", i));	*/
		printf("%3d\t%3.1f\n", i, conv(i));

	return 0;
}

float conv(int m)
{
	return (5.0/9.0) * (m-32);
}