#include "lists.h"
/**
 * dlistint_len - returns number of element in a linked list
 * @h: header pointer
 * Return: number of element in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *tmp;

	node_count = 0;
	tmp = h;

	/* Triverse through list */
	while (tmp != NULL)
	{
		tmp = tmp->next;
		node_count += 1;
	}
	return (node_count);
}
