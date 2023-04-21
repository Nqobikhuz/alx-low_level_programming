#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - The function will print numbers
 *
 * @separator: The adress of the string to be printed
 * @n: Number of integers passed to the function
 * Return: Printed numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list ap;

	if (separator == NULL)
	{
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		printf("%d", x);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	 printf("\n");
}
