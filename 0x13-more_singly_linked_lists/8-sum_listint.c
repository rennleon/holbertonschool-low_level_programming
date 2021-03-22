#include "lists.h"

/**
 * sum_listint - Sum all the nodes values
 * @head: Pointer to head node
 *
 * Return: Sum of all nodes values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
