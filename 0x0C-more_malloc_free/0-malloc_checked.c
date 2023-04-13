#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a functiont that allocates memory
 * using malloc
 * @b: size to be allocated
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *s = malloc(sizeof(b));

	if (s == NULL)
		exit(98);

	return (s);
}
