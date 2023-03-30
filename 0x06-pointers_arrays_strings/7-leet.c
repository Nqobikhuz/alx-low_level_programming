#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string
 * Return: numbers
 */

char *leet(char *s)
{
	int i;
	int l;

	char *j = "AaEeOoTtLl";
	char *k = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (l = 0; j[l] != '\0'; l++)
		{
			if (s[i] == j[l])
				s[i] = k[l];
		}
	}
	return (s);
}
