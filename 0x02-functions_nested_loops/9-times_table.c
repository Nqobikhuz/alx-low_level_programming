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
		_putchar(n * 57);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
