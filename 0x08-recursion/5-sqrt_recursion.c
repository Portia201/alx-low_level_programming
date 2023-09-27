#include "main.h"

/**
 * number - help get the natural square root of a number.
 * @n: number to calculate the square root
 * @square: square root number to be found
 * Return: outcome of square root
 * if square root is not natural return -1
 * if root is less than 0 return -1
 */
int number(int n, int square)
{
	if (n * n == square)
		return (n);
	if (n == square)
		return (-1);
	return (1 * number(n + 1, square));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: number to calculate the square root
 *  Return: outcome of square root
 *  If there is no natural square root for n then must return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
