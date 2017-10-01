/* 	Exercise 2-9 write int lower(int c) using conditional expression */

#include <stdio.h>

int lower(int c);

int main()
{
	int c;

	while ((c=getchar()) != EOF)
		printf("%c", lower(c));

	return 0;
}

int lower(int in)
{	
	return (in >= 'A' && in <= 'Z') ? in + 'a' - 'A' : in;
}