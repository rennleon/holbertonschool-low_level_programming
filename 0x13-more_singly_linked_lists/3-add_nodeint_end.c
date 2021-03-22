#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of the list
 * @head: Pointer to pointer to head node
 * @n: Value of the new node
 *
 * Return: Pointer to the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(**head));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new_node;

	return (new_node);
}
