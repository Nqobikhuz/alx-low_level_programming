#include "main.h"

/**
 * print_diagonal -prints diagonal lines
 * @n: input variable
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int space;

	for (i = 1; i <= n; i++)
	{
		for (space = 1; space <= i; space++)
		{
			_putchar(' ');
			_putchar(92);
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
