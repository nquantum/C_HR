/* 	Exercise 3-1 binary search */

#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{

	return 0;
}

int binsearch(int x, int v[], int n)
{
	int low, hight, mid;

	low = 0;
	high = n - 1;
	while (low <= high) 
	{
		mid = (low+high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else 
			return mid;		
	}
	return -1;
}