/* 	Exercise 2-4 write squeeze(s1, s2) , del s1 frm each char s2 */

#include <stdio.h>

#define	MAX	100

int main()
{
	int i, j;
	int n = 'l';
	char s[MAX] = "Hello test\n";

	for (i = j = 0; s[j] != '\0'; ++j)
		if (s[j] != n)
			s[i++] = s[j];	
	s[i] = '\0';

	printf("%s", s);

	return 0;
}