/* 	Exercise 2-2 write loop program instead for */

#include <stdio.h>

#define LIM 100

enum loop { NO, YES };
enum loop okloop = NO;

int main()
{
	int i = 0;
	int c;
	char s[LIM];

	while (i < LIM - 1)
	{
		if ((c = getchar()) != '\n')
			if (c != EOF)
				s[i] = c;
			else
				break;
		else
			break;
		++i;
	}
	s[i] = '\0';

	printf("%s\n", s);
	printf("%d\n", okloop);
	
	return 0;
}