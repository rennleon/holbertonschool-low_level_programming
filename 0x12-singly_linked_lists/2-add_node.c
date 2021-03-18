#include "lists.h"

int len(const char *str);
char *get_str(const char *str, int len);

/**
 * add_node - Adds a new node at the begginig of a singly linked list
 * @head: Head node of the list
 * @str: String value of the new node
 *
 * Return: Addres of the newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = get_str(str, len(str));
	new_node->len = len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;

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

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * get_str - Creates a copy of a string
 * @str: String
 * @len: Length of str
 *
 * Return: Pointer to the new string
 */
char *get_str(const char *str, int len)
{
	int i = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * len + 1);

	if (new_str == NULL)
		return (NULL);

	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}

	new_str[i] = '\0';

	return (new_str);
}
