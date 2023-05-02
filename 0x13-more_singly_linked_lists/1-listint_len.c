#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * listint_len - reurtns the number of elements in a lin=stint_t list
 * @h: head of the linked list
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}
	return(counter);
}
