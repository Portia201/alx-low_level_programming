#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: comparing first string
 * @s2: comparing second string
 * Return: value less than 0 if str1 is less than str2, 
 * 0 if string is greater compared to other and 0 if they equal.
 */
int _strcmp(char *s1, char *s2)
{
	int contrary, compare_value;

	contrary = 0;
	while (s1[contrary] == s2[contrary] && s1[contrary] != '\0')
	{
		contrary++;
	}
	compare_value = s1[contrary] - s2[contrary];
	return (compare_value);
}
