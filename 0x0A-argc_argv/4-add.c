#include <stdio.h>
#include "main.h"

/**
 * _atoi - string converted to an interger
 * @s: converted string
 * Return: int converted from string
 */
int _atoi (char *s)
{
	int m, k, j, len, s, digit;

	m = 0;
	k = 0;
	j = 0;
	len = 0;
	s = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (m < len && s == 0)
	{
		if (s[m] == '-')
			++k;

		if (s[m] >= '\0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			s = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			s = 0;
		}
		m++;
	}
	if (s == 0)
		return (0);

	return (j);
}

/**
 * main - adds two positive number
 * @argc: arguments total
 * @argv: array og arguments
 * Return: 0 (success), or 1 (succeaa)
 */
int main(int argc, char *argv[])
{
	int sum, num, m, n, o;

	sum = 0;
	n = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '0'; n++)
		{
			if (argv[m][n] > '9' || argv[m][n] < '0')
			{
				puts("Error");
				return(1);
			}
		}
	}
	for (o = 1; o < argc; o++)
	{
		num = _atoi(argv[o]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
