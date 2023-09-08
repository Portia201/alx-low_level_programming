#include <stdio.h>
/**
 * main - rint alphabets except q and e
 * Return: Eachtime 0 (Success)
 */
int main(void)
{
	char d;
	
	d = 'a';
	while
		(d <= 'z') {
			if ((d != 'q' && d != 'e') && d <= 'z')
				putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
