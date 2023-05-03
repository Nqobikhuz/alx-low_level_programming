#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list
 * or NULL if if the node doesn't exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		for (count = 0; count < index; count++)
	{
		head = head->next;
		return (head);
	}
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}
