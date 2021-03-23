#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to head node
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0, compare_slow_curr = 0;
	const listint_t *slow, *fast, *curr;

	if (head == NULL)
		return (0);

	curr = head;
	slow = fast = head;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		count++;

		slow = slow->next;
		if (compare_slow_curr == 0 && fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			if (slow == fast)
			{
				compare_slow_curr = 1;
				slow = head;
			}
		}

		if (compare_slow_curr && slow == curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;/*exit(98);*/
		}
	}

	return (count);
}
