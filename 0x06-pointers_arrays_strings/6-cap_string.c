#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string of characters
 * Return: capitalised characters
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		str[i] = str[i] - 32;
		}
		if (str[i] == ' ')
			++i;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	else
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	}
	return (0);
}
