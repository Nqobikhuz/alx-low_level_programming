#include "main.h"

/**
 * print_last_digit - is a funstion that
 * prints the last digit of an int
 *
 * @i: input numbers
 *
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int l;

	l = i % 10;

	if (i > 0)
	{
		return (l);
	}
	else
	{
		return (l * -1);
	}
}
