#include <stdio.h>
/**
 *main - Entry point
 *description - print letters of the alphabet
 *Return: Always 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
		putchar('\n');
	return (0);
}
