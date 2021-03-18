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
	const list_t *curr = h;

	if (h == NULL)
		return (0);

	while (curr != NULL)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", curr->len, curr->str);

		curr = curr->next;
		count_nodes++;
	}

	return (count_nodes);
}
