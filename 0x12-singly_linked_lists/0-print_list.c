#include "lists.h"

/**
 * print_list - Prints the elements of a singly linked list
 * @h: Header node of the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count_nodes++;
	}

	return (count_nodes);
}
