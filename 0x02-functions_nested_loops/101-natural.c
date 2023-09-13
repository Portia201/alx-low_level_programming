/**
 * File: 101-natural.c
 * Auth: Vincent Kip
 */

#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int m, sum = 0;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
			sum += m;
	}
	printf("%d\n", sum);
	return (0);
}
