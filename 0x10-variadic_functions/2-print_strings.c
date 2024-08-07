#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of arguments passed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(string, char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (separator != NULL && i != (n - 1))
	printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}

