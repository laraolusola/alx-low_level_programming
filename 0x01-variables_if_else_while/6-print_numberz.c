#include <stdio.h>

/**
 *  main - prints all single digit numbers of base 10
 *
 *  Return: The return value 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
