#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * is_digit - checks if a strijg comtains a non digit char
 * @s: evaluated string
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multipliea two.positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, j, carry, digit1, digit2, *result, i = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (j = 0; j <= len1 + len2; j++)
	       result[j] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1 --)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (j = 0; j < len - 1; j++)
	{
		if (result[j])
			i = 1;
		if (i)
		_putchar(result[j] + '0');
	}
	if (!i)
		_putchar(0);
	_putchar ('\n');
	free(result);
	return (0);
}
