#include <stdio.h>
/**
 * main - Printing alphabetics except q and e
 * Return - Eachtime 0 (Success)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'r')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
