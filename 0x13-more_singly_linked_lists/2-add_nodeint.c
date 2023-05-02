#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of a listint_t list
 * @head: head of the list
 * @n: integers
 * Return: If succesful, the address of the new element
 * on failure, NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
