#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 *
 * @d: structure of dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
