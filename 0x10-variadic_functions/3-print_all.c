#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Function that prints anything
 *
 * @format: a list of types of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ar;
	char *x, *seperator = " ";

	va_start(ar, format);

	while (format[i] && format)
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", seperator, va_arg(ar, int));
			break;
		case 'i':
			printf("%s%i", seperator, va_arg(ar, int));
			break;
		case 'f':
			printf("%s%f", seperator, va_arg(ar, double));
			break;
		case 's':
			x = va_arg(ar, char *);
			if (x == NULL)
			{
				printf("(nil)");
			}
			if (x != NULL)
			{
			printf("%s%s", seperator, x);
			}
			break;
		default:
			break;
		}
		seperator = ", ";
			i++;
	}
	va_end(ar);
	printf("\n");
}
