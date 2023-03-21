#include "main.h"

/**
 *print_alphabet - prints letters of the alphabet in lowercase
 *
 *return: always 0
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	return;
}
