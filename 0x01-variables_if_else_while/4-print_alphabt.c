#include <stdio.h>
/**
 * main - rint alphabets except q and e
 * Return: Eachtime 0 (Success)
 */

int main(void)
{
	char n = 'a';

	while (n <= "z")
	{
		if (n != 'e' && n != 'q')
		{
		putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
