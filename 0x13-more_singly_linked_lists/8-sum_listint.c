#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: pointer to the first node
 * Return: the sum of all the data of a listint_t linked list
 * or o if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
