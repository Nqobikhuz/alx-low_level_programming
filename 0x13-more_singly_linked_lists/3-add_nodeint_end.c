#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_y list
 * @head: head of the linked list
 * @n: integers
 * Return: the address of the new elements
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last;

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
		last->next = new_node;

	return (new_node);
}
