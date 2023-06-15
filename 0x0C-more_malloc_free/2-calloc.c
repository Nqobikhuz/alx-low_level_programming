#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * using malloc
 *
 * @nmemb: the array
 * @size: size to be allocated
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (NULL);

	free(arr);
	return (arr);
}
