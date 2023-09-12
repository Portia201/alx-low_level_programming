/**
 * File: 101-natural.c
 * Auth: Vincent Kip
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * 	that are multiples of 3 or 5.
 */
int main(void)
{
	int m, sum = 0;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
			sum += m;
	}
	print("%d\n", sum);

	return (0);
}
