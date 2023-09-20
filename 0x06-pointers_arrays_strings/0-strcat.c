#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: Eachtime 0
 */
char *_strcat(char *dest, char *src)
{
	int string_lengthA, string_lengthD;

	string_lengthA = 0;
	string_lengthD = 0;

	while (*(dest + string_lengthA) != '\0')
		string_lengthA++;

	while (*(src + string_lengthD) != '\0')
		string_lengthD++;
	{
		*(dest + string_lengthA) = *(src + string_lengthD);
		string_lengthA++;
		string_lengthD++;
	}
	*(dest + string_lengthA) = '\0';
	return (dest);
}
