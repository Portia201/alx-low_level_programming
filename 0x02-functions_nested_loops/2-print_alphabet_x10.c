#include "main.h"

/**
 * print_alphabet_x10 - Create alphabet x10 times
 * Return: Anything
 */

void print_alphabet_x10(void)
{
	char ch;
	int n;
	n = 0;

	while (n < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		n++;
	}
}
