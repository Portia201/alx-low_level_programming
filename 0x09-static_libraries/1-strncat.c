#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *  @dest: destination for string pointer
 *  @src: source string pointer
 *  @n: numbers of bytes to be concatenated
 *
 *  Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int string_lengthA, string_lengthB;

	string_lengthA = 0;
	string_lengthB = 0;

	while (dest[string_lengthA] != '\0')
		string_lengthA++;

	while (src[string_lengthB] != '\0' && string_lengthB < n)
	{
		dest[string_lengthA] = src[string_lengthB];
		string_lengthA++;
		string_lengthB++;
	}
	dest[string_lengthA] = '\0';

	return (dest);
}
