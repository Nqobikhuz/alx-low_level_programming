#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t
 * @head: pointer to the first node of the single linked list
 * return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	temp = head->next;

	free(temp->str);
	free(temp);
}
