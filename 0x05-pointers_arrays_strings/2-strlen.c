#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a character type
 * Return: an integer
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
	++l;
	}
	return (l);
}
