/* 	Exercise 2-3 write htoi(s) , x and X */

#include <stdio.h>
#include <ctype.h>

#define MAX	1000

int htoi(char in[]);

int main()
{
	char store1[MAX] = "7654321";	
	char store2[MAX] = "54321";

	printf("store1 = %s > %d\n", store1, htoi(store1));
	printf("store2 = %s > %d\n", store2, htoi(store2));
	
	return 0;
}

int htoi(char store[])
{
	int i, out;

	for (i = 0, out = 0; store[i] != '\0'; ++i)
	{
		out = out * 10  + store[i] - '0';
/*		printf("%d\n", out); */
	}
	return out;
}