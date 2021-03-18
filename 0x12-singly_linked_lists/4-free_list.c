#include "lists.h"

int len(const char *str);

/**
 * add_node_end - Adds a new node at the begginig of a singly linked list
 * @head: Pointer to the head node of the list
 * @str: String value of the new node
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
