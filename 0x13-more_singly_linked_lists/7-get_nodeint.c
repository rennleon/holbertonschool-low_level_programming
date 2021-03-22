#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node in a list
 * @head: Pointer to head node
 * @index: Node index
 *
 * Return: Node at index 'index'
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
