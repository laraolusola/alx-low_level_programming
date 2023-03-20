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
	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of	a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
