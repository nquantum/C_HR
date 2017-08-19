/* 	Exercise 1-17 print all input lines that
	longer than 80 characters */

#include <stdio.h>
#define MAXLINE 1000
#define LIMIT 	5

int getline(char line[], int m);

int main()
{
	int i, len;
	char line[MAXLINE];


	while ((len = getline(line, MAXLINE)) > 0)
	{
		for (i=2; line[len-i] == '1' || line[len-i] == '2'; ++i) /* p0o1p2 3\4n = 5 */
		;
		--i;
		line[len-i] = '\n';
		--i;
		line[len-i] = '\0';
		printf("%s",line);
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