/* 	Exercise 1-13 print histogram length of words
	horizontal, vertical */

#include <stdio.h>

#define IN 			0
#define OUT 		1
#define MAX_WD		10
#define HISTOGRAM 	30

int main()
{
	int c, i, j, nc, nmax, ncom, overflow, state;
	int ndigit[11];

	/* init variable for nxt function */
	for (i = 0; i < MAX_WD; ++i)
		ndigit[i] = 0;
	nc = 0;
	overflow = 0;	
	state = OUT;

	/* get no of ndigit[0-9], no of overflow */
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{			
			if (nc > 0)
			{				
				if (nc <= MAX_WD)
					++ndigit[nc-1];
				else 
					++overflow;
				nc = 0;				
			}
			state = OUT;	
		}	
		else if (state == OUT)
		{
			state = IN;
			nc = 1;
		}
		else if (state == IN)
			++nc;
	}

	/* fine max no of ndigit[i] */
	nmax = 0;
	for (i = 0; i < MAX_WD; ++i)
		if (ndigit[i] > nmax)
			nmax = ndigit[i];
	printf("max: %d\n", nmax); /* show nmax */

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
		printf("%2d - %3d:", j+1, ndigit[j]);
		if (ndigit[j] > 0)
		{
			if ((ncom = ndigit[j]*HISTOGRAM/nmax) <= 0)
				ncom = 1;
			for (i = 0; i < ncom; ++i)
				putchar('x');
		}
		putchar('\n');
	}

	return 0;
}