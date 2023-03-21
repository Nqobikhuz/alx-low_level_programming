#include "main.h"

/**
 * print_sign - prints the sign of a number,
 * by detemining if it is greater than,
 * equal to or less than 0
 *
 * @n: The input number
 *
 * Return: 1 and prints + if n is greater than zero,
 * returns 0 and prints 0 if n is zero,
 * and returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
