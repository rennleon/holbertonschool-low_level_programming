#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at index
 * @h: Double pointer to head node
 * @idx: Index at which to insert the new node
 * @n: Data value for the new node
 *
 * Return: Pointer to the newly created node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev = NULL, *new_node;
	unsigned int index = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (prev = *h; prev != NULL && index < (idx - 1); prev = prev->next)
		index++;

	if (prev == NULL)
		return (NULL);

	if (prev->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = prev->next;
	new_node->prev = prev;
	prev->next->prev = new_node;
	prev->next = new_node;

	return (new_node);
}
