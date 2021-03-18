#include "lists.h"

/**
 * free_list - Frees memory allocated by a list's elements
 * @head: Pointer to the head node of the list
 *
 * Return: Addres of the newly created node
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);

	free(head->str);
	/*free(head->next);*/
	free(head);
}
