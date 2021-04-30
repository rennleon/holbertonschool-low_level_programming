#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to head node
 * @index: Indes of the node to be returned
 *
 * Return: Pointer to the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr;

	if (head == NULL)
		return (NULL);

	for (curr = head; curr != NULL; curr = curr->next)
	{
		if (count == index)
			return (curr);
		count++;
	}

	return (NULL);
}
