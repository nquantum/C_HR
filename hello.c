/* 	Exercise 2-1 range of type */

#include <stdio.h>
#include <limits.h>
/* #include <float.h> */

int main()
{
	char test_char;
	short test_short;
	int test_int;
	long test_long;

	signed char test_s_char;
	unsigned char test_u_char;

	signed short test_s_short;
	unsigned short test_u_short;

	signed int test_s_int;
	unsigned int test_u_int;

	signed long test_s_long;
	unsigned long test_u_long;

/* char signed unsigned */
	printf("char MIN is: %d\n", test_char = CHAR_MIN);
	printf("char MAX is: %d\n", test_char = CHAR_MAX);
	printf("signed char MIN is: %d\n", test_s_char = SCHAR_MIN);
	printf("signed char MAX is: %d\n", test_s_char = SCHAR_MAX);
	printf("unsigned char MIN is: %d\n", test_u_char = 0);
	printf("undigned char MAX is: %d\n", test_u_char = UCHAR_MAX);

/* int signed unsigned */
	printf("short MIN is: %d\n", test_short = SHRT_MIN);
	printf("short MAX is: %d\n", test_short = SHRT_MAX);
	printf("int MIN is: %d\n", test_int = INT_MIN);
	printf("int MAX is: %d\n", test_int = INT_MAX);
	printf("long MIN is: %d\n", test_long = LONG_MIN);
	printf("long MAX is: %d\n", test_long = LONG_MAX);

	printf("signed short MIN is: %d\n", test_s_short = SHRT_MIN);
	printf("signed short MAX is: %d\n", test_s_short = SHRT_MAX);
	printf("unsigned short MIN is: %d\n", test_u_short = 0);
	printf("unsigned short MAX is: %d\n", test_u_short = USHRT_MAX);

	printf("signed int MIN is: %d\n", test_s_int = INT_MIN);
	printf("signed int MAX is: %d\n", test_s_int = INT_MAX);
	printf("unsigned int MIN is: %u\n", test_u_int = 0);
	printf("unsigned int MAX is: %u\n", test_u_int = UINT_MAX);

	printf("signed long MIN is: %ld\n", test_s_long = LONG_MIN);
	printf("signed long MAX is: %ld\n", test_s_long = LONG_MAX);
	printf("unsigned long MIN is: %lu\n", test_u_long = 0);
	printf("unsigned long MAX is: %lu\n", test_u_long = ULONG_MAX);

	return 0;
}