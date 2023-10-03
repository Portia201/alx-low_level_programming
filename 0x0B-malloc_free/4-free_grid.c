#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously create
 * by your alloc_grid function
 * @grit: to be freed
 * @height: grid height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || height == 0)
		return;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
