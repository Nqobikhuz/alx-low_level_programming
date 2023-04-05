#include "main.h"

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 *
 * @n: natural numbers
 *
 * Return: natural square root
 */
int _square(int n, int i);
int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

int _square(int n, int i)
{
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

	return (_square(n, i + 1));
}
