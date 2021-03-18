#include "lists.h"

int len(const char *str);
char *get_str(const char *str, int len);

/**
 * add_node_end - Adds a new node at the begginig of a singly linked list
 * @head: Pointer to the head node of the list
 * @str: String value of the new node
 *
 * Return: Addres of the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new_node;

	return (new_node);
}

/**
 * len - Calculates the length of a string
 * @str: Sstring
 *
 * Return: Length of str
 */
int len(const char *str)
{
	int length = 0;

	if (str == NULL)
		return (0);

	while (str[length] != '\0')
		length++;

	return (length);
}
