#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning of a single linked list
 * @head: first node in the single linked list
 * @str: string
 * Return: the address of a the new elelment if  sucessful
 * or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);

	if (new_node == NULL || new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
