#include <stdio.h>
/**
 *main - Entry point
 *description - print letters of the alphabet
 *Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
