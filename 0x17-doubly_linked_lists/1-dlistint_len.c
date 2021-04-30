#include "lists.h"

/**
 * dlistint_len - Returns the number of elements of a doubly linked lists
 * @h: Pointer to head node
 *
 * Return: Number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count_nodes++;
	}

	return (count_nodes);
}
