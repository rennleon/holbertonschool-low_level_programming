#include "lists.h"

listint_t *intersect_node(listint_t *curr);

/**
 * free_listint_safe - Frees the memory used by a list
 * @h: Pointer to pointer to head node
 *
 * Return: Number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0, passed_int_node = 0;
	listint_t *tmp, *curr;
	listint_t *int_node;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;

	int_node = intersect_node(curr);

	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		if (tmp != int_node)
		{
			count++;
			tmp->next = NULL;
			free(tmp);
		}
		else
			passed_int_node++;

		if (passed_int_node > 1)
		{
			tmp->next = NULL;
			free(tmp);
			*h = NULL;
			return (++count);
		}
	}

	*h = NULL;

	return (count);
}

/**
 * intersect_node - Finds the interseccion node of a cyclic linked list
 * @head: Pointer to head node
 *
 * Return: Pointer to the intersection node or NULL if it doen't exists
 */
listint_t *intersect_node(listint_t *head)
{
	int cmp_slow_curr = 0;
	listint_t *slow, *fast, *curr;

	slow = fast = curr = head;

	while (curr != NULL)
	{
		curr = curr->next;

		slow = slow->next;
		if (cmp_slow_curr == 0 && fast && fast->next)
		{
			fast = fast->next->next;
			if (slow == fast)
			{
				cmp_slow_curr = 1;
				slow = head;
			}
		}

		if (cmp_slow_curr && slow == curr)
			return (curr);
	}

	return (NULL);
}
