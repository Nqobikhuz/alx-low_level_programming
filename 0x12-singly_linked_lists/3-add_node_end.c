#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a single linked list
 * @head: pointer to the node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (new_node->str == NULL)
	{
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

	return (new_node);
}


