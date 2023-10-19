#include "lists.h"
/**
 * list_len - function that return number of element
 * @h: pointer to the first element
 * Return: number of elemt
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
