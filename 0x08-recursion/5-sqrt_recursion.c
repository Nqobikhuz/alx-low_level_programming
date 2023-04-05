#include "main.h"

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 *
 * @n: natural numbers
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	int i;

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (i + 1);
	}
	else
	{
		return (-1);
	}

	return (_sqrt_recursion(n));
			}
