/* 	Exercise 2-8 write rightrot(x, n) rotate to the right of n bit  */

#include <stdio.h>
#include <limits.h>

unsigned int rightrot(unsigned int x, int n);
int find_l(unsigned int x);

int main()
{
	unsigned int x = 10;
	int n = 4;

/*	printf("uint_max %u\n", UINT_MAX);
	printf("rotate time: %d\n", find_l(x));	*/
	printf("%u\n%u\n", x, rightrot(x, n));

	return 0;
}

unsigned int rightrot(unsigned int x, int n)
{		
	unsigned int x_tmp = x >> n;
	int l = find_l(x);
	unsigned int r_tmp = (x & ~(~0 << n)) << l - n;
	return x_tmp | r_tmp;
}

int find_l(unsigned int x)
{
	int i =0;

	for (x = x | ~0; x != 0; x = x >> 1)
		++i;

	return i;
}