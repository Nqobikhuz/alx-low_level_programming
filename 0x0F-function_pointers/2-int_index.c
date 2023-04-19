#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: array of values to be checked
 * @size: number of elements in array
 * @cmp: is a pointer to the function to be
 * used to compare values
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			return (i);
			i++;
		}
	}
		return (-1);
}
