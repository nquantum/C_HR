/* 	Exercise 2-5 write any(s1, s2) , return 1st location occurs of s2 */

#include <stdio.h>

#define	MAX	100

int any(char s1[], char s2[]);

int main()
{
	char s[MAX] = "abcdefghijklmnopqrstuvwxyz\n";
	char test[MAX] = "1";

	printf("%s", s);
	printf("%s\n", test);
	printf("%d\n", any(s, test));

	return 0;
}

int any(char in[], char comp[])
{
	int i, pos;

	for (pos = 0; in[pos] != '\0'; ++pos)
	{
		for (i = 0; comp[i] != '\0'; ++i)
			if (in[pos] == comp[i])
				return pos;
	}

	return -1;
}