#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: the string to be looked at
 * @accept: string containing the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int table, i;

		for (table = 0; *s != '\0'; table++)
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (*s == accept[i])
				{
					return (s);
				}
			}
			s++;
		}
		return ('\0');
}
