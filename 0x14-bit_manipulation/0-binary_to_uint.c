#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int m;

	if (!b)
		return (0);

	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
		dec_val = 2 *dec_val + (b[m] - '0');
	}

	return (dec_val);
}
