#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the contents of s1, then those of s2,
 * and then null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int s1length = 0;
	int s2length = 0;
	int i, k;
	char *j;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (i = 0; s1[i] != '\0'; i++)
		s1length++;

	for (i = 0; s2[i] != '\0'; i++)
		s2length++;

	j = malloc(sizeof(char) * (s1length + s2length) + 1);

	if (j == NULL)
		return (NULL);

	for (k = 0; k < s1length + s2length; k++)
	{
		if (k <= i)
			j[k] = s1[k];

		else
			j[k] = s2[i - s2length];
	}

	j[k] = '\0';
	return (j);
}
