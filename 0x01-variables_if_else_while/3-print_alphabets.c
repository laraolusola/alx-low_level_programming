#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: the return value 0 (succes)
 */
int main(void)
{
	int ch, chh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (chh = 'A'; chh <= 'Z'; chh++)
	{
		putchar(chh);
	}
	putchar('\n');
	return (0);
}
