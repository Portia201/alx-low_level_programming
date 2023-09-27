#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to print
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
