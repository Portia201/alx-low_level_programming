#include "main.h"

/**
 * print_square - prints squares
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
int hash1, hash2;
if (size > 0)
{
for (hash1 = 0; hash1 < size; hash1++)
{
for (hash2 = 0; hash2 < (size - 1); hash2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
