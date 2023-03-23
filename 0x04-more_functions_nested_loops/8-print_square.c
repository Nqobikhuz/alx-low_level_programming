#include "main.h"

/**
 * print_square - prints a square
 * @size: sizes of the squares
 * Return: Always 0
 */

void print_square(int size)
{
	for (size = 1; size >= 0; size++)
		{
			_putchar('#');
			_putchar('\n');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
}
