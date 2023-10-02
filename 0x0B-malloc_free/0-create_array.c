#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the array size to create
 * @c: char initialized
 * Return: a pointer to the array
 * (success), or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);
	buffer = (char*) malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (0);
	while (n < size)
	{
		*(buffer + n) = c;
		n++;
	}
	*(buffer + n) = '\0';

	return (buffer);
}
