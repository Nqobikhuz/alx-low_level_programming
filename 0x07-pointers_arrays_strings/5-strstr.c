#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string that is to be scanned
 * @needle: substring to be located
 *
 * Return: a pointer to the beginning of the
 * located substring, or NULL if it not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (NULL);
}
