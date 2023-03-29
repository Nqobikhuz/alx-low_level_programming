#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source string
 * @n:number of characters to be appended
 * Return: A pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;
	int i;

	for (i = 0; dest[i]; i++)
		destlength++;

	for (i = 0; src[i] < n; i++)
		dest[destlength + i] = src[i];

	return (dest);
}
