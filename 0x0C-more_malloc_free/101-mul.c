#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a strimgs comtains a non digit char
 * @s: evaluated string
 * Return: 0 if a non-digit is found 1, otherwise
 */
int is_digit (char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] < '0' || s[m] > '9')
			return (0);
		m++;
	}
	return (1);
}
/**
 * _strlen - returns string length
 * @s: string to evaluate
 * Return: string length
 */
int _strlen (char *s)
{
	int m = 0;

	while (s[m] != '0')
	{
		m++;
	}
	return (m);
}
/**
 * errors - handles errors for main
 */
void errors (void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: arrays of qrguments
 * Return: Eachtime 0
 */
int main(int argc, char *argv[])
{
	char *s1 = argv[1];
	char *s2 = argv[2];
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int len = len1 + len2 + 1;
	int m, carry, digit1, digit2, a = 0;

	int *result = malloc(sizeof(int) * len);
	if (!result)
		return 1;
	for (m = 0; m <= len1 + len2; m++)
		result[m] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--) 
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (int len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1+ len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	
	for (m = 0; m < len - 1; m++)
	{
		if (result[m])
			a = 1;
			printf("%d", result[m]);
	}
	
	if (!a)
		printf("0");
	printf("\n");
	
	free(result);
	return 0;
}
