#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: fist string
 * @s2: second string
 * Return: pointer to newly string (Success) NULL errror
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int n = 0, m = 0, wid1 = 0, wid2 = 0;

	while (s1 && s1[wid1])
		wid1++;
	while (s2 && s2[wid2])
		wid2++;

	s3 = malloc(sizeof(char) * (wid1 + wid2 + 1));
	if (s3 == NULL)
		return (NULL);
	n = 0;
	m = 0;

	if (s1)
	{
		while (n < wid1)
		{
			s3[n] = s1[n];
			n++;
		}
	}
	if (s2)
	{
		while (n < (wid1 + wid2))
		{
			s3[n] = s2[m];
			n++;
			m++;
		}
	}
	s3[n] = '\0';

	return (s3);
}
