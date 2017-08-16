/* 	Exercise 1-13 print histogram length of words
	horizontal, vertical */

#include <stdio.h>

#define IN 			0
#define OUT 		1
#define MAX_WD		10
#define HISTOGRAM 	30

int main()
{
	int c, i, j, nc, ntotal, overflow, state;
	int ndigit[11];

	nc = 0;
	ntotal = 0;
	overflow = 0;
	for (i = 0; i < MAX_WD; ++i)
		ndigit[i] = 0;
	state = OUT;

	/* get no of ndigit[0-9], no of overflow */
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN && nc > 0)
			{
				state = OUT;
				if (nc <= MAX_WD)
				{
					++ndigit[nc-1];
					++ntotal;
				}
				else 
					++overflow;
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
	
	/* show readed word & overflow */
	printf("%d\n", ndigit[0]);
	printf("%d\n", ndigit[1]);
	printf("%d\n", ndigit[2]);
	printf("%d\n", ndigit[3]);
	printf("%d\n", ndigit[4]);
	printf("%d\n", ndigit[5]);
	printf("%d\n", ndigit[6]);
	printf("%d\n", ndigit[7]);
	printf("%d\n", ndigit[8]);
	printf("%d\n", ndigit[9]);
	printf("%d\n", overflow);

	/* print histogram horizontal */
	for (j = 0; j < MAX_WD; ++j)
	{
		printf("%2d - ", j+1);
		for (i = 0; i < ndigit[j]*HISTOGRAM/ntotal; ++i)
			putchar('x');	
		putchar('\n');
	}

	return 0;
}