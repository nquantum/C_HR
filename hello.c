/* 	Exercise 1-22 fold input */

#include <stdio.h>

#define MAX	1000

void decomment(char a[], char b[]);

int main()
{
	char store[MAX], out[MAX];
	int i, c;

	i = 0;
	while ((c = getchar()) != EOF)
	{
		store[i] = c;
		++i;
	}
	store[i] = '\0';

	decomment(store, out);
	printf("%s", out);

	return 0;
}

void decomment(char in[], char out[])
{
	int i, j;

	j = i = 0;
	while (in[i] != '\0')
	{
/*		if (in[i] == '/' && in[i+1] == '*')
			for (; in[i] == '*' && in[i+1] == '/'; ++i)
				; 
		else*/
			out[j] = in[i];
		++i;
		++j;/* */
	}
	out[j] = '\0';
}