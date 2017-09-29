/* 	Exercise 2-6 write setbits(x,p,n,y) */

#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main()
{
	int a = 0xFF;
	printf("%d\n%d\n", a, setbits(a, 0xFF, 0, 0));

	return 0;
}

int setbits(int x, int p, int n, int y)
{
	int clrbits = 0xF0;
	int setbits = 0;

	x = x & clrbits;

	return x;
}