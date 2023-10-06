#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string append
 * @s2: concatenated string
 * @n: bytes of s2, and null terminated
 * Return: results from pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l = 0, m = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	len1++;
	while (s2 && s2[len2])
	len2++;
	
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	
	if (!s)
		return (NULL);

	while (l < len1)
	{
		s[l] = s1[l];
		l++;
	}
	while (n < len2 && l < (len1 + n))
		s[l++] = s2[m++];

	while (n < len2 && l < (len1 + len2))
		s[l++] = s2[m++];

	s[l] = '\0';

	return (s);
}
