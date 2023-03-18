#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: The return value 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
