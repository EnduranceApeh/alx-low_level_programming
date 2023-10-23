#include "lists.h"
/**
 * print_listint - print all element of list
 * @h: pointer to head
 * Return: return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			return (node_count);
		}
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
