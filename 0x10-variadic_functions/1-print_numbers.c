#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((i + 1) < n)
		{
			printf("%s", seperator);
		}
	}
	va_end(args);
	printf("\n");
}
