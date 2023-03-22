#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		_putchar(n * 31);
		_putchar(n * 32);
		_putchar(n * 33);
		_putchar(n * 34);
		_putchar(n * 35);
		_putchar(n * 36);
		_putchar(n * 37);
		_putchar(n * 38);
		_putchar(n * 39);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
