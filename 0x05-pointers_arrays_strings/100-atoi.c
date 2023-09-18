#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: converted string
 * Return: int that was converted from string
 */
int _atoi(char *s)
{
	int a, b, n, len, k, num;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	k = 0;
	num = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && b == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			n = n * 10 + num;
			k = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			k = 0;
		}
		a++;
	}

	if (k == 0)
		return (0);
	return (n);
}
