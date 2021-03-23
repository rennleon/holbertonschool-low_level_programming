#include "lists.h"

listint_t *intsec_slow_fast(listint_t *slow, listint_t *fast);

/**
 * find_listint_loop - Finds the node were a loop starts
 * @head: Pointer to head node
 *
 * Return: Pointer to the intersection node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = fast = head;

	slow = intsec_slow_fast(slow, fast);

	if (slow == NULL)
		return (NULL);

	while (head != slow)
	{
		head = head->next;
		slow = slow->next;
	}


	return (head);
}

/**
 * intsec_slow_fast - Finds the interseccion node of a cyclic linked list
 * @slow: Slow pointer jumps by 1
 * @fast: Fast pointer jumps by 2
 *
 * Return: Pointer to the intersection node or NULL if it doen't exists
 */
listint_t *intsec_slow_fast(listint_t *slow, listint_t *fast)
{
	while (slow != NULL)
	{
		slow = slow->next;
		if (fast && fast->next)
		{
			fast = fast->next->next;
			if (slow == fast)
			{
				return (slow);
			}
		}
		else
			return (NULL);
	}

	return (NULL);
}
