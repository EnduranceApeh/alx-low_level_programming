#include "lists.h"
/**
 * listint_len - function that return number of element
 * @h: pointer to the head pointer
 * Return: return number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
