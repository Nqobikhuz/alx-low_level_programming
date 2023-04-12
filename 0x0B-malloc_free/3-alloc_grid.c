#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to
 * a two dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a grid
 */

int **alloc_grid(int width, int height)
{
	int i, k, l, m;
	int **j;

	if (width <= 0 && height <= 0)
		return (NULL);

	j = malloc(sizeof(int *) * height);

	if (j == NULL)
	{
		free(j);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		j[i] = malloc(sizeof(int) * width);

		if (j[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(j[k]);
			}

			free(j);
			return(NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
			j[l][m] = 0;
	}
	return (j);
}



