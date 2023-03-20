#include <stdio.h>

/**
 * main - entry point
 * description - print all possible combinations of a single digit no.
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
{
	if (n == 9)
	{
		putchar(n + '0');
	}
	else
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');

}
}
	return (0);
}
