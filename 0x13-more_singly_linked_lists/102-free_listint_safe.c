#include "lists.h"

/**
 * free_listint_safe - Frees the memory used by a list
 * @h: Pointer to pointer to head node
 *
 * Return: Number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *prev, *curr;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;

	while (curr != NULL)
	{
		count++;
		prev = curr;
		curr = curr->next;
		prev->next = NULL;
		free(prev);
	}

	free(*h);
	*h = NULL;

	return (count);
}
