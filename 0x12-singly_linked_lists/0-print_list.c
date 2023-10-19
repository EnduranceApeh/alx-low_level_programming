#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that print all the element of a list
 * @h: pointer to the head of node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t list_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] [%s]\n", h->len, h->str);
		}
		list_count++;
		h = h->next;
	}
	return (list_count);
}
