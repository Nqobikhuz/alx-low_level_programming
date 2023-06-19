#include "dog.h"
#include <stdlib.h>

/**
 * string_length - finds the length of the strings
 * @str: string
 * Return: the length of the string
 */

int string_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * strcopy - copies strings
 *
 * @dest: the location of copied string
 * @src: string to copy
 * Retrun: dest
 */

char *strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates attributes for a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = malloc(sizeof(char) * (string_length(name) + 1));
	newdog->owner = malloc(sizeof(char) * (string_length(owner) + 1));

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		return (NULL);
	}

	newdog->name = strcopy(newdog->name, name);
	newdog->age = age;
	newdog->owner = strcopy(newdog->owner, owner);

	return (newdog);
}
