#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter.
 * @str: duplicated string
 * Return: duplicated string (success) NULL error
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int n, wid;

	n = 0;
	wid = 0;

	if (str == NULL)
		return (NULL);

	while (str[wid])
		wid++;

	duplicate = malloc(sizeof(char *) * (wid + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[n] = str[n]) != '\0')
		n++;

	return (duplicate);
}
