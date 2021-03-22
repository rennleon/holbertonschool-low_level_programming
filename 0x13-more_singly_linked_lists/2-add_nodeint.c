#include "lists.h"

/**
 * add_nodeint - Adds a node at the begining of the list
 * @head: Pointer to pointer to head node
 * @n: Value of the new node
 *
 * Return: Pointer to the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

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

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
