#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to search
 * @c: character to be found
 * Return:  a pointer to the first occurrence of the character c
 *  in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int table;

	for (table = 0; s[table] >= '\0'; table++)
	{
		if (s[table] == c)
			return (s + table);
	}
	return ('\0');
}
