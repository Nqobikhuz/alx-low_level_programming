#include "main.h"

/**
 * is_prime_number - identifies if an integer is a prime numer
 *
 * @n: input integers
 *
 * Return: 1 if the integer is a prime numer
 * otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, 2));
}

int is_prime_number_recursive(int n, int i)
{

	if (n <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	i++;

	return (is_prime_number(n));
}
