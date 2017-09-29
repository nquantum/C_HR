/* 	Exercise 2-7 write invert(x,p,n) */

#include <stdio.h>

int invert(int x, int p, int n);

int main()
{
	int a = 215;
	int b = 235;

	printf("a = %d\nb = %d\n", a, b);
	printf("compute = %d\n", invert(a, 2, 4));

	return 0;
}

int invert(int x, int p, int n)
{	
	return x ^ ~(~0 << p + n) & (~0 << p);
}