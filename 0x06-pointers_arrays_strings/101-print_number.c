#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: printed integer
 * Return: Eachtime 0
 */
void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		temp = n;
		_putchar('-');
	} else
	{
		temp = n;
	}
	if (temp / 10)
		print_number(temp / 10);

	_putchar((temp % 10) + '0');
}
