#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: The string to be printed between the strings
 * @n: number of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		printf("\n");
		return;
	}

	if (n == 0)
	{
		printf("(nil)\n");
	}

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		printf("%s", str);
	
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
			
