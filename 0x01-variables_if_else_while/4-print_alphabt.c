#include <stdio.h>

/**
 * main - prints all the alphabet in lowercase except q,e
 *
 * Return: the return value 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
