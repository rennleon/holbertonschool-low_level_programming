#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Double pointer to head node
 * @n: Value for the new node
 *
 * Return: Pointer to the newly created node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new_node;
	new_node->prev = curr;
	return (new_node);
}
