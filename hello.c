/* 	Exercise 1-22 fold input */

#include <stdio.h>

#define MAX			1000
#define N 			20
#define IN_WORD		1
#define END_WORD	0

int getline(char input[], int limit);

int main()
{
	int c, i, j, state;
	char line[MAX];

	state = END_WORD;
	pos = 0;
	while (getline(line, MAX) != 0)
	{
		while ((c = line[pos]) != '\0')
		{
			if (c != ' ')
			{	
				if (pos == 'N')//end word | end column
					for (; i > 0; --i) //endword> show space, word
					{
						--pos;
						putchar('\n');
					}
				else if (state == END_WORD)
				{
					state = IN_WORD;
					i = 1;;
				}
				else if (state == IN_WORD)
					++i;
			}
			else if (c == ' ')
			{
				if (state == IN_WORD)
				{
					for (j = i; j > 0; --j)
						--pos;
				
					for (; i > 0; --i)
						putchar(line[pos]);
				}
				if (pos == 'N')
					putchar('\n');
				putchar(' ');
			}
			++pos;
		}				
	}

	return 0;
}