#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the nth node of a list
 * @head: Pointer to pointer to head node
 * @index: Node index
 *
 * Return: 1 if succeds, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}

	curr = *head;
	for (i = 0; i < index - 1 && curr != NULL; i++)
		curr = curr->next;

	if (i != index - 1 || curr == NULL || curr->next == NULL)
		return (-1);

	tmp = curr->next;
	curr->next = curr->next->next;
	tmp->next = NULL;
	free(tmp);

	return (1);
}
