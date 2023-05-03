#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: adress of the pointer to the first node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if successful and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL || head == NULL)
	{
		return (-1);
	}

	while (index == NULL)
	{
		*head = node->next;
		free(node);
		node = NULL;
		return (1);;
	}

	while (i < index)
	{
		*head = node;
		node = node->next;
		i++;
	}

	node = *head;

	if (node == NULL)
	{
		return (-1);
	}

	(*head)->next = node->next;
	free (node);
	node = NULL;

	return (1);
}

