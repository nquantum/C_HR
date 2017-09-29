/* 	Exercise 2-6 write setbits(x,p,n,y) */

#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main()
{
	int a = 0xFF;
	int b = 0xF9;

	printf("%d\n%d\n", a, setbits(a, 2, 4, b));

	return 0;
}

int setbits(int x, int p, int n, int y)
{
/*	int y_mod = y & ~(~0 << n);
	int x_mod = x & ((~0 << p + n) | ~(~0 << p));

	return x_mod | y_mod << p;*/
	return (x & ((~0 << p + n) | ~(~0 << p))) | (y & ~(~0 << n)) << p;
}