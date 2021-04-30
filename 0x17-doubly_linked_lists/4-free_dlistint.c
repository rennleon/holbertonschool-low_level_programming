#include "lists.h"

/**
 * free_dlistint - Frees a doubl linked list
 * @head: Pointer to head node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *prev;

	if (head == NULL)
		return;

	curr = head;
	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		free(prev);
	}
}
