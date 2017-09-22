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

	return 0;
}