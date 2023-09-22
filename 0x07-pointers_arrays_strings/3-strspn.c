#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to evaluate
 * @accept: searching string
 * Return:  the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	int table;

	while (*s)
	{
	for (table = 0; accept[table]; table++)
		{
			if (*s == accept[table])
			{
				bytes++;
				break;
			}
			else if (accept[table + 1] == '\0')
				return (bytes);
		}
	s++;
	}
	return ('\0');
}
