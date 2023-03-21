#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 *Return: 1 if the output is c, else always 0
 */

int _islower(int c)
{
	if (c >= 97 && c < +122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
