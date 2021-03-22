#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at specified index
 * @head: Pointer to pointer to head node
 * @idx: Index at which to insert
 * @n: Node's data value
 *
 * Return: Sum of all nodes values
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *curr, *new_node;

	if (head == NULL)
		return (NULL);

	curr = *head;
	for (i = 0; idx != 0 && i < idx - 1 && curr != NULL; i++)
		curr = curr->next;

	if (idx != 0 && (i != idx - 1 || curr == NULL))
		return (NULL);

	new_node = malloc(sizeof(**head));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = curr;
		*head = new_node;

		return (new_node);
	}

	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
