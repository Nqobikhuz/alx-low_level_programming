#include <stdio.h>

/**
 * main -Entry point
 * description - print letters of alohabet exluding e and q
 * Return: always 0
 */

int main(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++)
	if (l != 'e' && l != 'q')
	putchar(l);
	putchar('\n');

return (0);
}
