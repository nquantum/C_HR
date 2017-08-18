/* 	Exercise 1-14 print histogram of 
	the frequency of difference of words
	horizontal, vertical */

#include <stdio.h>
#include <ctype.h>

#define IN 			0
#define OUT 		1
#define MAX_WD		128
#define HISTOGRAM 	40

int main()
{
	int c, i, j, nc, nmax, overflow, state;
	int ncom;
/*	int ncom[MAX_WD];	*/
	int ndigit[MAX_WD];

	/* init variable for nxt function */
	for (i = 0; i < MAX_WD; ++i)
		ndigit[i] = 0;
	nc = 0;
	overflow = 0;	
	state = OUT;

	/* get no of ndigit[0-9], no of overflow */
	while ((c = getchar()) != EOF)
	{
/*		if (c == ' ' || c == '\t' || c == '\n')
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
			++nc;	*/
		if (c < MAX_WD)
			++ndigit[c];
		else
			++overflow;
	}

	/* find max no of ndigit[i] */
	nmax = 0;
	for (i = 0; i < MAX_WD; ++i)
		if (ndigit[i] > nmax)
			nmax = ndigit[i];
	printf("max: %d\n", nmax); /* show nmax */

	printf("overflow: %d\n", overflow);

	/* show readed word & overflow */
/*	for (i = 0; i < MAX_WD; ++i)
		printf("%c: %d\n",'a'+i, ndigit[i]);
	printf("overflow: %d\n", overflow);	*/

	/* print histogram horizontal */
	for (j = 0; j < MAX_WD; ++j)
	{
		if (isprint(j))
			printf("%2c - ", j);
		else 
			printf("   - ");
		printf("%3d:", ndigit[j]);
		if (ndigit[j] > 0)
		{
			if ((ncom = ndigit[j]*HISTOGRAM/nmax) <= 0)
				ncom = 1;
			for (i = 0; i < ncom; ++i)
				putchar('x');
		}
		putchar('\n');
	}

	/* print vertical */
	/* convert no to histogram */
/*	for (i = 0; i < MAX_WD; ++i)
		if (ndigit[i] > 0)
		{
			if ((ncom[i] = ndigit[i]*HISTOGRAM/nmax) <= 0)
				ncom[i] = 1;
		}
		else
			ncom[i] = 0;	*/
	/* write histogram */
/*	for (i = HISTOGRAM; i > 0; --i)
	{
		for (j = 0; j < MAX_WD; ++j)
		{
			if (i <= ncom[j])
				printf(" x ");
			else
				printf("   ");			
		}
		putchar('\n'); 
	}	*/
	/* write topic */
/*	for (i = 0; i < MAX_WD; ++i)
		printf(" %1d ", i + 1);
	putchar('\n');	*/

	return 0;
}