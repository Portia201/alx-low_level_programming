#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: converted string
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int a, b, n, len, d, digit;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (n);
}

/**
 * main - programe that multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 (success) 1 (error)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}