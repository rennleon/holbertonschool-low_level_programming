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

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	for (prev = *h; prev != NULL && index < (idx - 1); prev = prev->next)
		index++;

	if (index == idx - 1)
	{
		new_node->next = prev->next;
		new_node->prev = prev;
		prev->next = new_node;
		if (prev->next != NULL)
			prev->next->prev = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
