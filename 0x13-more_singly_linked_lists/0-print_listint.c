#include "lists.h"

/**
 * print_listint - Prints linked list's nodes values
 * @h: Pointer list's head node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
