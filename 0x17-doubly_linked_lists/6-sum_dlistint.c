#include "lists.h"

/**
 * sum_dlistint - Sums all nodes data of a doubly linked list
 * @head: Pointer to head node
 *
 * Return: Sum of all node data values
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *curr;

	if (head == NULL)
		return (0);

	for (curr = head; curr != NULL; curr = curr->next)
		sum += curr->n;

	return (sum);
}
