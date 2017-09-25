/* 	Exercise 2-3 write htoi(s) , x and X */

#include <stdio.h>
#include <ctype.h>

#define MAX	1000

int htoi(char in[]);

int main()
{
	char store1[MAX] = "20";	
	char store2[MAX] = "123";

	printf("store1 = %d\n", htoi(store1));
	printf("store2 = %d\n", htoi(store2));
	
	return 0;
}

int htoi(char store[])
{
	int i, out;

	for (i = 0; store[i] != '\0'; ++i)
	{
		printf("i = %d, store[i] = %d\n", i, store[i] - '0');
	}
	return 0;
}