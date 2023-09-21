#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: changed string
 *
 * Return: capitalize all words
 */

char *cap_string(char *str)
{
	int i;

	/* start capitalizing with firt word */
	i = 0;
	while (str[i] != '\0')
	{/* if the character after i is a char, capitalize it */
		if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
	{
		if (str[i + 3] >=  97 && str[i + 1] <= 122)
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	i++;
	}
	return (str);
}
