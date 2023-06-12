#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a
 * newly allocated space in memory.
 *
 * @str: string
 *
 * Return: a pointer to the duplicated string and
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *cpy;
	int size = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
	{
		size++;
	}

	cpy = malloc((sizeof(char) * (size + 1)));

	if (cpy == NULL)
	{
		return (NULL);
	}

	while (j <= size)
	{
		cpy[j] = str[j];
		j++;
	}

	return (cpy);
}
