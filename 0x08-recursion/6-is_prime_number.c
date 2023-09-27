#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number to be checked
 * Return:  returns 1 if the input integer is a prime number
 */
int is_prime_number(int n)
{
	int prime_number = 0;

	if (n < 2)
		prime_number = 0;
	else if (n == 2)
		prime_number = 1;
	else if (n % 2 == 1)
		prime_number = 1;
	return (prime_number);
}
