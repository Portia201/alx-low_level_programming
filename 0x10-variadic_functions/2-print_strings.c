#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int m;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);
	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (m = 0; m < n; m++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			printf("%s%s", sep, ptr);
	}

	printf("\n");
	va_end(list);
}
