#include <stdio.h>
#define IN 	1
#define OUT 0

int main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && state == OUT)
		{
			state = IN;
			printf("%c", c);
		}
		if (c != ' ')
		{
			state = OUT;
			printf("%c", c);
		}
	}

	return 0;
}