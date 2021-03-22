#include "lists.h"

/**
 * free_listint - Frees the memory used by a list
 * @head: Pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
