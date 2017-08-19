/* 	Exercise 1-19 function reverse */

#include <stdio.h>
#define MAXLINE 1000
#define LIMIT 	5

int getline(char line[], int m);
void reverse(char to[], char from[]);

int main()
{
	int i, len;
	char line[MAXLINE];
	char store[MAXLINE];

	while (getline(line, MAXLINE) > 0)
	{	
		printf("%s", line);
		reverse(store, line);
		printf("%s", store);
	}	

	return 0;
}

int getline(char s[], int lim)
{
	int c, i, j;

	for (i=0, j=0; (c=getchar())!=EOF && c!='\n'; ++i, j++)
		if (j < lim - 2)	
			s[j] = c;

	if (c == '\n')
	{
		s[j] = '\n';
		++j;
		++i;
	}
	s[j] = '\0';

	return i;
}

void reverse(char to[], char from[])
{
	int i, j;

	for (i = 0; from[i] != '\n'; ++i)
		;
	--i;

	j = 0;
	while (i > 0)
	{
		to[j] = from[i];
		++j;
		--i;
	}
	to[j] = from[i];
}