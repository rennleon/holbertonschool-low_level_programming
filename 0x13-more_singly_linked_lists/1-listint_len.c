#include "lists.h"

/**
 * listint_len - Counts the ndes of a list
 * @h: Pointer to the list's head node
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
