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
	int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	while (s1length != '\0')
	{
		s1length++;
	}

	while (s2length != '\0')
	{
		s2length++;
	}

	concat = malloc(sizeof(char) * (s1length + s2length) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1length; i++)
	{
		s1[i] = concat[i];
	}

	for (j = 0; j < s2length; j++)
	{
		s2[j] = concat[i = j];
	}

	concat[i + j] = '\0';
	return (concat);
}
