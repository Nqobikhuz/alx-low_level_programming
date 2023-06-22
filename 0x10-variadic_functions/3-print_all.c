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
	int i = 0, j;
	va_list ar;
	char *x

	va_start(ar, format);

	while (format[i])
	{
		switch (format[i] == "c":
			printf("%c", va_arg(ar, int));
			break;

			case "i":
			printf("%i", va_arg(ar, int));
			break;

			case "f":
			printf("%f", va_arg(ar, double));
			break;

			case "s":
			char *x = va_arg(ar, char);

			if (x == NULL)
			{
				printf("(nil)");
				break;
			}

			printf("%s", x);
			break;

			default:
			i++;
		}
		if (format == NULL)
		{
			printf("\n");return;
		}
	}

	va_end(ar);
}
