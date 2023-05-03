#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address to the pointer to the first node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		temp = head->next;
		temp = head;
		free(temp);
	}
	head = NULL;
}
