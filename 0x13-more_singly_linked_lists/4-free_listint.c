#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
