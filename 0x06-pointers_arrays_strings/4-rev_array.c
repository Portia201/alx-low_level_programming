#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of element of an array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temporary, start;

	n = n - 1;
	start = 0;
	while (start <= n)
	{
		temporary = a[start];
		a[start++] = a[n];
		a[n--] = temporary;
	}
}
