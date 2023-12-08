#include "lists.h"
/**
 * print_dlistint - print all element of a doubly list
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t node_count;

	node_count = 0;
	tmp = h;

	/* Triverse through the list */
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		node_count += 1;
	}
	return (node_count);
}
