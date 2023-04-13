#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: input values
 * @max: input values
 *
 * Return: values from min to max
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == 0)
		return (NULL);

       while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
