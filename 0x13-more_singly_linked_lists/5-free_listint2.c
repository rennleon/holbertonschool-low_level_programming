#include "lists.h"

/**
 * free_listint2 - Frees the memory used by a list
 * @head: Pointer to pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}

	*head = NULL;
}
