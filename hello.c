/* 	Exercise 1-13 print histogram length of words
	horizontal, vertical */

#include <stdio.h>

#define IN 	0
#define OUT 1

int main()
{
	int c, i, j, nc, state;
	int ndigit[10];

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	state = OUT;
	nc = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
			{
				//printf("%3d", nc);
				state = OUT;
				++ndigit[nc];
				nc = 0;
			}		
		}	
		else if (state == OUT)
		{
			state = IN;
			++nc;
		}
		else if (state == IN)
			++nc;
	}
	
/*	ndigit[0] = 0;
	ndigit[1] = 1;
	ndigit[2] = 2;
	ndigit[3] = 3;
	ndigit[4] = 4;
	ndigit[5] = 5;
	ndigit[6] = 6;
	ndigit[7] = 5;
	ndigit[8] = 10;
	ndigit[9] = 20;	*/

	for (j = 0; j < 10; ++j)
	{
		printf("%2d - ", j);
		for (i = 0; i < ndigit[j]; ++i)
			putchar('x');	
//		printf("%4d", ndigit[j]);
		putchar('\n');
	}

	return 0;
}