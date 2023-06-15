#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenate
 * two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size of second string
 *
 * Return: a pointer that allocates a new space
 * in memory that has s1, followed by n byes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0, s2len = 0, string = 0, i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0' && s2len < n)
		s2len++;

	if (n >= s2len)
		string = s1len + s2len;
	else
		string = s1len + s2len;

	str = malloc(sizeof(char) * (string + 1));

	if (str == NULL)
	return (NULL);

	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}

	while (j < s2len && j < n)
	{
		str[i + j] = s2[j];
		j++;
	}

	str[i + j] = '\0';

	return (str);
}
