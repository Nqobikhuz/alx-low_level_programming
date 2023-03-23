#include "main.h"

/**
 * print_numbers - prints numbers from 0 - -
 * @i: input numbers
 * Return: Always 0
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
