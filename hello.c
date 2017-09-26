/* 	Exercise 2-3 write htoi(s) , x and X */

#include <stdio.h>

#define MAX	1000

enum test { INVALID, VALID };

int atoi(char in[]);
int htoi(char in[]);

int main()
{
	char store1[MAX] = "7654321";	
	char store2[MAX] = "54321";
	char store3[MAX] = "0x123";

	printf("store1 = %s > %d\n", store1, atoi(store1));
	printf("store2 = %s > %d\n", store2, atoi(store2));
	printf("store3 = %s , %c, %c, %c, %d\n", store3, store3[0], store3[1], store3[2], htoi(store3));
	
	return 0;
}

int atoi(char store[])
{
	int i, out;

	for (i = 0, out = 0; store[i] != '\0'; ++i)
	{
		out = out * 10  + store[i] - '0';
/*		printf("%d\n", out); */
	}
	return out;
}

int htoi(char store[])
{
	int i, out, state;

	if (store[0] == '0' && (store[1] == 'x' || store[1] != 'X'))
		for (i = 2; store[i] != '\0'; ++i)
		{
			if ((store[i] >= '0' && store[i] <= '9') || (store[i] >= 'a' && store[i] <= 'f') || (store[i] >= 'A' && store[i] <= 'F'))
				state = VALID;
			else
			{
				state = INVALID;
				break;
			}
		}
	else
		state = INVALID;

	if (state == VALID)
		for (i = 2, out = 0; store[i] != '\0'; ++i)
		{
			if (store[i] >= '0' && store[i] <= '9')
				out = out * 16 + store[i] - '0';
			else if (store[i] >= 'a' && store[i] <= 'f')
				out = out * 16 + store[i] - 'a' + 10;
			else if (store[i] >= 'A' && store[i] <= 'F')
				out = out * 16 + store[i] - 'A' + 10; 
		}
	else 
		out = 0;

	return out;
}