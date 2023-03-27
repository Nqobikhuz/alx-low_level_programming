#include "main.h"

/**
 * puts2 - prints everyother character of a string
 * @str: character type
 * Return: 0 always
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
