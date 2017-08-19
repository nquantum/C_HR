/* 	Charpter 1-9 Character Array */

#include <stdio.h>
#define MAXLINE 10

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		printf("%d, %s\n", len, line);
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)
		printf("%s", longest);

	return 0;
}

int getline(char s[], int lim)
{
	int c, i, j;

	for (i=0, j=0; (c=getchar())!=EOF && c!='\n'; ++i)
	{
		if (i < lim-2) /* 1000 - 2 = 998 (0-997) */
		{
			s[j] = c;
			++j;
		}
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

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}