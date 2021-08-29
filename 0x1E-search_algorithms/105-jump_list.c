#include "search_algos.h"

/**
 * inc_node - Increments a node 'step' times ahead
 * @node: Pointer to a linked list node
 * @step: Number that indicates how many postitions to go further
 *
 * Return: Pointer to a node 'step' times further
 */
listint_t *inc_node(listint_t *node, int step)
{
	while (step && node && node->next)
	{
		node = node->next;
		step--;
	}

	return (node);
}

/**
 * jump_list - Searches a value in a sorted linked list of integers
 * @list: Pointer to linked list
 * @size: Array's size
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = sqrt(size);
	size_t lo = 0, hi = 0;
	listint_t *node_lo = list, *node_hi = list;

	if (!list)
		return (NULL);

	while (hi < size && node_hi->n < value)
	{
		lo = hi;
		hi += step;

		node_lo = node_hi;
		node_hi = inc_node(node_hi, step);

		printf("Value checked at index [%lu] = [%d]\n", node_hi->index, node_hi->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lo, node_hi->index);

	for (; lo < size && lo <= hi; lo++)
	{
		printf("Value checked at index [%lu] = [%d]\n", lo, node_lo->n);
		if (node_lo->n == value)
			return (node_lo);

		node_lo = node_lo->next;
	}

	return (NULL);
}
