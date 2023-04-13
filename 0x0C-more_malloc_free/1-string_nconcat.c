#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenate
 * two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size to be allocated
 *
 * Return: a pointer that allocates a new space
 * in memory that has s1, followed by n byes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n >= j)
		l = i + j;
	else
		l = i + n;

	*str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
	return (NULL);
	while (k <= i)
	{
		str[k] = s1[k];
		k++;
	}
	while (k >= i)
	{
		str[k] = s2[j];
		j++;
	}

	str[k] = '\0';
	return (str);
}
