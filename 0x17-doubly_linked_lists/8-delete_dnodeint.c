#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the nth node
 * @head: Double pointer to head node
 * @index: Index at which to delete the node
 *
 * Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int ind = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = (*head)->next;
		if (curr != NULL)
			curr->prev = NULL;
		free(*head);
		*head = curr;
		return (1);
	}

	for (curr = *head; curr != NULL; curr = curr->next)
	{
		if (ind == index)
		{
			if (curr->prev)
				curr->prev->next = curr->next;
			if (curr->next)
				curr->next->prev = curr->prev;
			free(curr);
			return (1);
		}
		ind++;
	}

	return (-1);
}
