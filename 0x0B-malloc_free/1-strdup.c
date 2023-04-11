#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - Function that returns a pointer to a
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
	int size;
	int i;

	cpy = malloc(sizeof(char));
	if (str == NULL)
		return (NULL);

	for (size = 0; size < i; size++)
	{
		cpy[i] = str[size];
		i++;
	}

	return (cpy);
}
