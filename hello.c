/* 	Exercise 3-1 binary search */

#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
	int v[] = {1,2,3,4,6,7,8,9,10};
	char c[] = "hello";
	int i, a;

	i = binsearch(a = 10, v, 9);
	printf("%d\n", a);
	printf("i = %d\n", i);

	return 0;
}

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high && x != v[mid]) 
	{
		mid = (low+high) / 2;
		if (x < v[mid])
			high = mid - 1;
/*		else if (x > v[mid])
			low = mid + 1;
		else 
			return mid;		*/
		else 
			low = mid + 1;
	}
	if (x == v[mid])
		return mid;

	return -1;
}