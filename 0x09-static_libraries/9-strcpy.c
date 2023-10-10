#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * , including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: point out to the buffer to copy string
 * @src: copied string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
