#include "main.h"

/**
 * print_triangle - entry point
 * Description:i Prints diaponals
 * @size: Ssize of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int que, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (que = 1; que <= size; que++)
		{
			for (spaces = size - que; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= que; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
