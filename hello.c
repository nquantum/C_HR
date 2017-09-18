/* 	Exercise 1-22 fold input */

#include <stdio.h>

#define MAX			1000
#define N 			19

int getline(char input[], int limit);
void cutline(char input[]);

int main()
{
	char line[MAX];

	while (getline(line, MAX) != 0)
	{		
		cutline(line);					
	}

	return 0;
}

int getline(char in[], int lim)
{
	int c, i;

	i = 0;
	while ((c = getchar()) != EOF)
	{
		if (i < lim)
		{		
			in[i] = c;
			++i;
		}
	}
	in[i] = '\0';

/*	printf("%s", in);	*/

	return i;
}

void cutline(char in[])
{
	int i;
	int pos;  /* pos input */
	int no; /* number of character */

  	pos = no = 0;
  	while (in[pos] != '\0')
  	{
    	if (no < N)
    	{
      		++no;
      		++pos;
    	}
    	else
    	{
     		for (i = no; i > 0; --i)
          		putchar(in[pos-i]);
      		putchar('\n');
      		no = 0;
    	}
  	}
  	for (i = no; i > 0; --i)
      putchar(in[pos-i]);

  	return;
}