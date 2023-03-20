#include <stdio.h>

/**
 * main -entry point
 * discription - print numbers of base 16
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 16; n++)
{
	putchar(n + '0');
}
	putchar('\n');
	return (0);
	}
