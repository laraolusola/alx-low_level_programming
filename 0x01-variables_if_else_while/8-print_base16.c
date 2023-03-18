#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: The return value 0 (success)
 */
int main(void)
{
	int ch, chh;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (chh = 'a'; chh <= 'f'; chh++)
	{
		putchar(chh);
	}
	putchar('\n');
	return (0);
}
