#include <stdio.h>

/**
 * main - prints the size of the various data types on the computer
 *
 * Return: The return value 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;
/* sizeof evaluates the size of a variable */
	printf("size of char: %zu bytes\n", sizeof(a));
	printf("size of int: %zu bytes\n", sizeof(b));
	printf("size of	long: %zu bytes\n", sizeof(c));
	printf("size of long long: %zu bytes\n", sizeof(d));
	printf("size of float: %zu bytes\n", sizeof(e));
	return (0);
}
