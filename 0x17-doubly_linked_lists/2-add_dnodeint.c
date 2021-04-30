#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the begining of a list
 * @head: Double pointer to head node
 * @n: Value for the new node
 *
 * Return: Pointer to the newly created node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
