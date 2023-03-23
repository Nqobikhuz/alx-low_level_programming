#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times the _ character should be printed
 * Return: 0 always
 */

void print_line(int n)
{
	int c;

	c = 45;
	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}

