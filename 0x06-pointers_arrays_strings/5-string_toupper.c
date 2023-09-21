#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: changed string
 *
 * Return: string to uppercase
 */
char *string_toupper(char *n)
{
int letter_of_string;

letter_of_string = 0;

while (n[letter_of_string] != '\0')
{
if (n[letter_of_string] >= 'a' && n[letter_of_string] <= 'z')
{
n[letter_of_string] = n[letter_of_string] - 32;
}
letter_of_string++;
}
return (n);
}
