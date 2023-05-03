#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @h: pointer to the address of the first node
 * 
 * Return: the head node’s data
 * and 0 is the linked list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	
	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (n);
}
