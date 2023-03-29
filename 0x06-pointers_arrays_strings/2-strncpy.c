#include "main.h"

/**
 * _strncpy - compies a string
 * @dest: destination string
 * @src: source string
 * @n: characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
