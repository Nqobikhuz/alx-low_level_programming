#include "main.h"

/**
 * _strspn - gets the length of a
 * prefix substring
 *
 * @s: string containing the characters
 * to match
 * @accept: string to be scanned
 *
 * Return: the number of bytes in the
 * initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int ans;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			ans++;
		}
		}
	}
	return (0);
}
