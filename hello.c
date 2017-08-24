/* 	Exercise 1-21 function entab */

#include <stdio.h>
#define MAXLINE 1000
#define TAB 	8

int getline(char line[], int m);
void detab(char to[], char from[]);

int main()
{
	int c, i, j, k, space, tab;
	char line[MAXLINE];
	char store[MAXLINE];


	while ((c = getline(line, MAXLINE)) > 0)
	{
/*		printf("%s<org\n", line); */

		i = j = space = tab = 0;
		while ((c = line[i]) != '\0')
		{
			if (c == ' ')
			{				
				while (line[i] == ' ')
				{
					if ((i % TAB == 0) && (space > 0))
					{
						++tab;
						space = 0;
					}
					else
					{
						++space;
					}
					++i;
				}

				if (i % TAB == 0)
				{
					++tab;
					space = 0;
				}			
				else if (tab > 0)
					++space;

				for (k = 0; k < tab; ++k, ++j)
					store[j] = '\t';
				for (k = 0; k < space; ++k, ++j)
					store[j] = ' ';
			}
			else
			{
				store[j] = c;
				++i;
				++j;
			}
		}
		store[j] = '\0';

/*		printf("%s<mod\n", store); */
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