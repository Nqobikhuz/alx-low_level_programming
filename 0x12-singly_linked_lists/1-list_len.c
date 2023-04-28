#include "lists.h"
#include <stddef.h>

/**
 * list_len - prints the number of elements in list_t list
 *
 * @list_t: the sigle linked linked list
 * @h: pointer to the first node
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
