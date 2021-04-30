#include "lists.h"

/**
 * print_dlistint - Prints the values of a doubly linked list
 * @h: Pointer to head node
 *
 * Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}

	return (count_nodes);
}
