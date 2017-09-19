/* 	Exercise 1-22 fold input */

#include <stdio.h>

#define MAX	1000

void decomment(char a[]);

int main()
{
	char store[MAX];
	int i, c;

	i = 0;
	while ((c = getchar()) != EOF)
	{
		store[i] = c;
		++i;
	}
	store[i] = '\0';

	decomment(store);
	printf("%s", store);

	return 0;
}

void decomment(char in[])
{

}