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
	printf("size of a char: %lu bytes\n", sizeof(a));
	printf("size of an int: %lu bytes\n", sizeof(b));
	printf("size of	a long int: %lu bytes\n", sizeof(c));
	printf("size of a long long int: %lu bytes\n", sizeof(d));
	printf("size of a float: %lu bytes\n", sizeof(e));
	return (0);
}
