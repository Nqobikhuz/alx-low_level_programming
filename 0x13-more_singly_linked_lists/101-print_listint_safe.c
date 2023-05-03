#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list = malloc(sizeof(listint_t));
	size_t counter = 0;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		counter++;
		printf("[%p] %d\n", *head, (*head));
	}

	if (head == NULL)
	{
		free(head);
		exit(98);
	}

	if (list == NULL)
	{
		free(list);
		exit(98);
	}

	return (counter);
}
