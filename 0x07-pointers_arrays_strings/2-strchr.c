#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string
 * @c: the character to be located
 *
 * Return: the first occurance of character c
 * or NULL if it's not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
