#include "main.h"

/**
 * print_rev - prints a string in reverse
 * _strlen - returns the length of a string
 * @s: a character type (string)
 * Return: 0 Always
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
	{
		end++;
	}

	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
 * _strlen - prints the length of a string
 * @pointer: adressess of data
 * Return: an integer
 */

int _strlen(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
		c++;

	return (c);
}
