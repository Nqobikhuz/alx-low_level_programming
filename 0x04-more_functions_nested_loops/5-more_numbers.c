#include "main.h"

/**
 * more_numbers - prints number 0 to 14, 10 times
 *
 * Return: 0 always
 */

void more_numbers(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b;
			if (c > 9)
			{
				_putchar (1 + 48);
				c = b % 10;
			}
			_putchar(c + 48);
		}
		_putchar('\n');
	}
}
