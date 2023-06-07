#include "main.h"

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 *
 * @n: input numbers
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

/**
 * _square - programe used to check if a number
 * is natural
 *
 * @n: input number to be checked
 * @i:a variable that represents the current
 * value being checked for its square
 *
 * Return: natural square root of a number
 */

int _square(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_square(n, i + 1));
}
