#include "lists.h"

/**
 * print_list - Prints the elements of a singly linked list
 * @h: Pointer to list head
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
