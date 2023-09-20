#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination string pointer
 * @src: source of string pointer
 * @n: bytes to be used
 * Return: Eachtime 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num_of_bytes;

	for (num_of_bytes = 0; num_of_bytes < n && src[num_of_bytes] != '\0'; num_of_bytes++)
		dest[num_of_bytes] = src[num_of_bytes];

	for ( ; num_of_bytes < n; num_of_bytes++)
		dest[num_of_bytes] = '\0';

	return (dest);
}
