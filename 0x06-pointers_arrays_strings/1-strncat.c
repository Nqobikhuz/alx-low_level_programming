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
	int i = 0;

	while (dest[destlength])
		destlength++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlength + i] = src[i];
	dest[destlength + i] = '\0';

	return (dest);
}
