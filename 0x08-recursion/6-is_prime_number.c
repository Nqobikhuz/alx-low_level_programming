#include "main.h"

/**
 * is_prime_number - identifies if an integer is a prime number
 *
 * @n: input integers
 *
 * Return: 1 if the integer is a prime numer
 * otherwise 0
 */

int is_prime_number(int n)
{
        int i = 2;

        if (n <= 1)
        {
                return (0);
        }

        if (n % i == 0)
        {
                return (0);
        }

        if (i == n)
        {
                return (1);
        }

        else
        {
                return (1);
        }

        i++;

        return (is_prime_number(n) + 1);
}
