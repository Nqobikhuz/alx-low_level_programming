#include <stdio.h>

/**
 * main - entry point
 * description - print alphabet backwards
 * Return: 0 always
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
	putchar(l);
	}
	putchar('\n');
	return (0);
}
