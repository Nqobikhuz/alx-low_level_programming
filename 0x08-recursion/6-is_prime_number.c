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
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
