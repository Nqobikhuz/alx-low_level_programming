#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: input number
 * Return: an integear
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
