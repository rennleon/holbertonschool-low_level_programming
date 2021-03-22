#include "lists.h"

/**
 * pop_listint - Rremoves the head node form the list
 * @head: Pointer to pointer to head node
 *
 * Return: Node's data
 */
int pop_listint(listint_t **head)
{
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;

	return (data);
}
