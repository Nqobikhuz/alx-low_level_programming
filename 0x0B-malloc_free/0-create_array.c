#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates an array of chars
 * and initializes it with a specified char
 * @size: size of the array
 * @c: char to fill the array
 *
 * Return: a pointer to the array
 * or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	j = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (j == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		j[i] = c;

	return (j);
}
