#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the elements of single linked list list_t
 * @list_t: single liked list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	char *string;
	size_t counter = 0;

	while (h != NULL)
	{

	if (*string)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
		h = h->next;
		counter++;
	}
	return (counter);
}

