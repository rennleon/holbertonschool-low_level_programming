#include "lists.h"

/**
 * insert_dnodeint_at_index - Sums all nodes data of a doubly linked list
 * @h: Double pointer to head node
 * @idx: Index at which to insert the new node
 * @n: Data value for the new node
 *
 * Return: Pointer to the newly created node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new_node;
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

	for (curr = *h; curr != NULL; curr = curr->next)
	{
		if (index == idx)
		{
			new_node->next = curr;
			new_node->prev = curr->prev;
			curr->prev->next = new_node;
			curr->prev = new_node;
			return (new_node);
		}
		index++;
	}

	free(new_node);
	return (NULL);
}
