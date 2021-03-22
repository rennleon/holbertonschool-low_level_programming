#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to pointer to head node
 *
 * Return: Pointer to new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;

	return (*head);
}
