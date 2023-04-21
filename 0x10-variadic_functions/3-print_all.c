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
	char *separator = " ";
	va_list ar;
	const intex = {
		{"c", format_char};
		{"i", format_int};
		{"f", format_float};
		{"s", format_string};
	};

	va_start(ar, format);

	while (i < format[index])
	{
		printf(""
	}

	printf("%d
	va_end(ar);
