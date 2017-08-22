/* 	Exercise 1-20 function detab */

#include <stdio.h>
#define MAXLINE 1000
#define TAB 	4

int getline(char line[], int m);
void detab(char to[], char from[]);

int main()
{
	char line[MAXLINE];
	char store[MAXLINE];

	while (getline(line, MAXLINE) > 0)
	{
		detab(store, line);
		printf("%s", store);
	}

	return 0;
}

int getline(char s[], int lim)
{
	int c, i, j;

	for (i=0, j=0; (c=getchar())!=EOF && c!='\n'; ++i)
		if (j < lim - 2)
		{	
			s[j] = c;
			++j;
		}
	if (c == '\n')
	{
		s[j] = '\n';
		++j;
		++i;
	}
	s[j] = '\0';

	return i;
}

void detab(char to[], char from[])
{
	int c, i, j, k;

	i = j = k = 0;
	while ((c = from[i]) != '\0')
	{
		if (c == '\t')
		{
			while (k <= j)
				k = k + TAB + 1;
			while (j < k)
			{
				to[j] = ' ';
				++j;
			}
			i++;
		}
		else
		{
			to[j] = c;
			i++;
			j++;
		}		
	}
	to[j] = '\0';
}