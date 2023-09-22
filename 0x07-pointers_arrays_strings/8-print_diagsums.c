#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the square matrix of integers
 * @size: the size of the matrix
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int table, sum1 = 0, sum2 = 0;

	for (table = 0; table < size; table++)
	{
		sum1 += a[table];
		a += size;
	}
	a += size;
	for (table = 0; table < size; table++)
	{
		sum2 += a[table];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
