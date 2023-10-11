#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to look into
 * @size: array size
 * @cmp: pointer to comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]) != 0)
				return (m);
		}
	}
	return (-1);
}
