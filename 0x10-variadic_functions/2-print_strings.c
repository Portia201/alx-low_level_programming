#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int m;
	va_list valist;

	va_start(valist, n);

	 for (m = 0; m < n; m++)
	 {
		 str = va_arg(valist, char *);

		 if (str)
			 printf("%s", str);
		 else
			 printf("(nil)");

	if (m < n - 1)
		if (separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
