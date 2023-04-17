#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: dog structure
 *
 * Return: noting
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: %s\n", "(nil)");
		printf("Age: %d\n", 0);
		printf("Owner: %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
