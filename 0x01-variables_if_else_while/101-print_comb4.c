#include <stdio.h>

/**
 * main - prints all possible combination of three digits
 *
 * Return: the return value (0) success
 */
int main(void)
{
	int d, p, q;

	for (d = '0'; d < '8'; d++)
	{
	for (p = d + 1; p < '9'; p++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	if (q != p && q != d && p != d)
	{
	putchar(d);
	putchar(p);
	putchar(q);
	if (d < '7')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
