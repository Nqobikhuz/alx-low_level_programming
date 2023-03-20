#include <stdio.h>

/**
 * main -entry point
 * discription - print numbers using putchar
 * Return: always 0
 */

int main(void)
{

	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
