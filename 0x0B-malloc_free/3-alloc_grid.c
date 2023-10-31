#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int j;
	int k;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		*(matrix + j) = (int *)malloc(width * sizeof(int));
		if (*(matrix + j) == NULL)
		{
			for (j = 0; j < height; j++)
			{
				p = matrix[j];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			matrix[l][k] = 0;
		}
	}
	return (matrix);
}
