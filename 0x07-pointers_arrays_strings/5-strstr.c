#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle
 *  in the string haystack. The terminating null bytes (\0) are not compared
 *  @haystack: the sting to search in
 *  @needle: the substring to look for
 *  Return: a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int table;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		table = 0;
		if (haystack[table] == needle[table])
		{
			do {
				if (needle[table + 1] == '\0')
					return (haystack);
				table++;

			} while (haystack[table] == needle[table]);
		}
		haystack++;
	}
	return ('\0');
}
