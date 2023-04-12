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
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	cpy = malloc((sizeof(char) * i) + 1);

	if (cpy == NULL)
		return (NULL);

	while (j < i)
	{
		cpy[j] = str[j];
		i++;
	}
	
	cpy = '\0';
	return (cpy);
}
