#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the pointer to the first node
 * @idx: the index of where the new node should be added
 * @n: integers input int the function
 *
 * Return: the adress of the new node
 * or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == '\0')
	{
		*head = new_node->next;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (current_node != NULL && i < idx)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
