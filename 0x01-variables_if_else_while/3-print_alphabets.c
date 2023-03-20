#include <stdio.h>

/**
 * main - Entry point
 * description - print the alphabet in lower and higher case
 * Return: always 0
 */

int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
