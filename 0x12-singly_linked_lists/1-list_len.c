#include "lists.h"

/**
 * list_len - Calculates the number of nodes in a list
 * @h: Header node of the list
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	int count_nodes = 0;
	const list_t *curr = h;

	if (h == NULL)
		return (0);

	while (curr != NULL)
	{
		curr = curr->next;
		count_nodes++;
	}

	return (count_nodes);
}
